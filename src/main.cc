#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;

int main() {

    Manager m;
    Device device;
    UserInterface ui(Device);

    //.schedule(ui, 10_ms)
     m.schedule(device, 10_ms)     
     .init()
     .run();

    endwin();     
     
}