#include <iostream>
#include <chrono>
#include <vector>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;
//! Device off state
Device&Off:: device() { return (Device&) state_machine(); }
//! When device is plugged in, emit device_charge event for battery
//! \param e The event that triggered the transition  
void Off::exit(const Event& e) {
    
    if ( (e.name() == "plug")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_charge"));
    }

    
}
