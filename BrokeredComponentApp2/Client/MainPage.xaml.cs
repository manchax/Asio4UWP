using System.Diagnostics;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace Client
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private Server.BrokeredComponent1 _asioComponent;
        public MainPage()
        {
            this.InitializeComponent();
            _asioComponent = new Server.BrokeredComponent1();
            lstDrivers.ItemsSource = InstalledDrivers;
        }
        public string[] InstalledDrivers => _asioComponent.GetInstalledDrivers();
        public string SelectedDriver => lstDrivers.SelectedItem as string;
        
        private void Button_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            if ( string.IsNullOrWhiteSpace(SelectedDriver) )
                return;
            try {
                if ( !_asioComponent.OpenDriver(SelectedDriver) )
                    txtDisplay.Text = $"Error opening driver {SelectedDriver}";

                lstDrivers.Visibility = Visibility.Collapsed;
                Button.Content = "Open Control Panel";
                Button.Click -= Button_Click;
                Button.Click += Panel_Click;

                Button switchDrv = new Button()
                {
                    Content = "Switch ASIO Driver"
                };
                panel.Children.Add(switchDrv);
                switchDrv.Click += (s, ev) => {
                    panel.Children.Remove(switchDrv);
                    lstDrivers.Visibility = Visibility.Visible;
                    Button.Content = "Use this Driver";
                    Button.Click -= Panel_Click;
                    Button.Click += Button_Click;
                };
            }
            catch {
                Server.HostProcessManager hostProcessManager = new Server.HostProcessManager();
                hostProcessManager.KillProcess();
            }
            
            
        }

        private void Panel_Click(object sender, RoutedEventArgs e)
        {
            _asioComponent.ShowControlPanel();
        }
    }
}
