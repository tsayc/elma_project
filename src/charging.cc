#include <iostream>
#include <chrono>
#include <vector>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;

Device&Charging:: device() { return (Device&) state_machine(); }

void Charging::exit(const Event& e) {
    if ( (e.name() == "battery_full")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_on"));
    }
    

    
}
