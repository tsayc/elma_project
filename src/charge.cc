#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;
//! Create a battery charge state
Battery&Charge:: battery() { return (Battery&) state_machine(); }
//! print out charge full indecation 
//! \param e The event that triggered the transition  
void Charge::exit(const Event& e) {
    
    std::cout << "battery is charged full";
    
}
