#include <unistd.h>
#include "device.h"

using namespace device;

UserInterface::UserInterface(Device& sw) : Process("user input"), _device(sw) {
    initscr();   // Start ncurses
    timeout(1);  // Timeout for waiting for user input
    noecho();    // Do not echo user input to the screen
    curs_set(0); // Do not show the cursor
};

void show_state(int x, int y, Device& s){

mvprintw(5,1,"");
    // Print the time at the desired position.
    // mvprintw just calls sprintf
    
}

void UserInterface::update() {

    // USER INPUT
    // get a character from the user, if one is ready.
    // If no character is ready, getch() returns ERR (which is
    // ignored below since there is no condition in the switch statement)
    int c = getch();

    switch ( c ) {            
        case 'l':
            emit(Event("battery_low"));
            break;
        case 'f':
            emit(Event("battery_full"));
            //clear(); // Clear the screen of old stuff
            break;
        case 'p':
            emit(Event("plug"));
            break;
        case 'q':
            std::cout << "halting\n";
            halt();
            break;
    }

    // OUTPUT
    mvprintw(1,1,"Please enter l, f, p or q that indicate the device state\n");
    
    mvprintw(2,1,"battery_low(l), battery_full(f), plug(p), quit(q)\n");
    mvprintw(3,1,"Current device state: ");
    printw(_device.current().name().c_str());
    printw("\n");

    
    



    // for ( int i=0; i<_device.laps().size(); i++ ) {
    //     mvprintw(5+i, 1, "Lap %d", _device.laps().size()-i);
    //     show_time(5+i, 10, _device.laps()[i]);
    // }

    // NOTE: Since the device is running every 10 ms, we should sleep
    //       the ui to give processing time back to the OS. It is debatable
    //       whether this is the right place to put this. It could also become
    //       an Elma feature, or it could go in the Device class, etc.
    //       The number 9999 should also be a parameter and not a constant.
    usleep(9999);

}