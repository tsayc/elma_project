#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;
//! Battery state Drain. 
Battery&Drain:: battery() { return (Battery&) state_machine(); }
//! Print out message when battery stops draining 
//! \param e The event that triggered the transition  
void Drain::exit(const Event& e) {
    
    std::cout << "battery stops draining \n";
    
}


