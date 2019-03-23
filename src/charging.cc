#include <iostream>
#include <chrono>
#include <vector>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;
//! Device charging state
Device&Charging:: device() { return (Device&) state_machine(); }
//! Exit charging state when receive battery_full
//! And emit device_on event for battery
//! \param e The event that triggered the transition  
void Charging::exit(const Event& e) {
    if ( (e.name() == "battery_full")  ){
        // User stopped the trans
        //trans().stop();
        emit(Event("device_on"));
    }
    

    
}
