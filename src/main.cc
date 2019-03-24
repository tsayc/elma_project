#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>

#include "device.h"
#include "battery.h"
using namespace std::chrono;
using namespace elma;
using namespace device;
using namespace battery;
//! main class that initialize some instances
int main() {

    Manager m;
    Device device;
    Battery battery;
    UserInterface ui(device);

   m.schedule(ui, 10_ms)
     .schedule(device, 10_ms)     
     .schedule(battery, 10_ms)  
     .init()
     .run();

    endwin();     
     
}