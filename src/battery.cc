#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;
//! Define transistions for battery
//! When receive device_on battery goes from charge to drain
//! When receive device_off, battery goes from drain to no_change
//! When receive device_charge, battery goes to charge state
Battery::Battery() : StateMachine("battery") {

    // Define state machine initial states and transitions here
    set_initial(drain);
    set_propagate(false);
    
    add_transition("device_on", charge, drain);
    add_transition("device_off", drain, no_change);
    add_transition("device_charge", no_change, charge);
    add_transition("device_charge", drain, charge);

    
    

   
   
}









