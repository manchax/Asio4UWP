namespace Server
{
    using System;
    using System.Linq;
    using BlueWave.Interop.Asio;
    using System.Threading;
    using System.Diagnostics;

    public sealed class BrokeredComponent1
    {
        private static AsioDriver _driver;

        public BrokeredComponent1()
        {
            Debug.WriteLine("Brokered Component instantiated.");
        }

        public string[] GetInstalledDrivers()
        {
            
            //Console.WriteLine(AsioDriver.InstalledDrivers.Select( (x, i) => $"{i} - {x.Name}") );
            return AsioDriver.InstalledDrivers.Select(x => x.Name).ToArray();
        }

        public bool OpenDriver(string name)
        {
            // find the index
            int driverIndex = Array.FindIndex(AsioDriver.InstalledDrivers, x => name.Equals(x.Name));
            if ( driverIndex < 0 )
                throw new Exception($"Driver {name} not found.");

            Debug.WriteIf("STA" != Thread.CurrentThread.GetApartmentState().ToString(),
                "Not running in STA apartment state, ASIO COM objects require STA");

            Debug.WriteLine(Thread.CurrentThread.GetApartmentState().ToString());

            // ASIO needs an STA apartment state to work, 
            // for that we need to create our own thread
            // encapsulate thread's logic in a lambda
            Thread selectDriver = new Thread(() =>
            {
                _driver = AsioDriver.SelectDriver(AsioDriver.InstalledDrivers[driverIndex]);
            });
            // the reason we're using a new thread
            selectDriver.SetApartmentState(ApartmentState.STA);
            // executes the lambda
            selectDriver.Start();
            // make sure it's done
            selectDriver.Join();

            // internal reference to _driver is kept
            // returns true if success, false otherwise
            return _driver != null;
        }

        public void ShowControlPanel()
        {
            _driver?.ShowControlPanel();
        }
    }
}
