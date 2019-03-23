#include <iostream>
#include <chrono>
#include <vector>

#include "device.h"


using namespace std::chrono;
using namespace elma;
using namespace device;
//! Device on state
Device&On:: device() { return (Device&) state_machine(); }
//! When receive battery_low, send device_off event for battery
//! When device is plugged in, send device_charge event for battery
//! \param e The event that triggered the transition  
void On::exit(const Event& e) {
    if ( (e.name() == "battery_low")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_off"));
    }
    if ( (e.name() == "plug")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_charge"));
    }

    
}
