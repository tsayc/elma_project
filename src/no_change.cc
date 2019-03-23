#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;
//! battery no cahnge state
Battery&No_change:: battery() { return (Battery&) state_machine(); }
//! Print out message when battery state changes
//! \param e The event that triggered the transition  
void No_change::exit(const Event& e) {
    
    std::cout << "battery start changing";
    
}

