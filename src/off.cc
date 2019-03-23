#include <iostream>
#include <chrono>
#include <vector>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;

Device&Off:: device() { return (Device&) state_machine(); }

void Off::exit(const Event& e) {
    
    if ( (e.name() == "plug")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_charge"));
    }

    
}
