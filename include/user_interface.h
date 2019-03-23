#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>
#include <string>
#include "device.h"
#include "battery.h"


    
    using namespace std::chrono;
    using namespace elma;
    using namespace device;
    using namespace battery;


    //! A user interface for the a Trans object
    class UserInterface : public Process {

        public:

        //! Create a new trans user interface using curses
        //! \param sw A reference to a Trans object
        UserInterface(Device& sw);
        
        void init() {}
        void start() {}

        //! Display the time at the given x,y position on the screen
        void show_time(int x, int y, string s);

        //! Update the user interface by (a) reading keyboard input and (b) writing to the screen
        void update();
        void stop() {}

        private:
        Device& _device;
        //Battery& _battery;

    };

