#include <chrono>
#include <vector>

#include "device.h"

using namespace std::chrono;
using namespace elma;
using namespace device;

Device::Device() : StateMachine("device") {

    // Define state machine initial states and transitions here
    set_initial(on);
    set_propagate(false);
    add_transition("battery_low", on, off);
    add_transition("plug", on, charging);
    add_transition("plug", off, charging);
    add_transition("battery_full", charging, on);
    
    

   
   
}









