#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;

Battery&Drain:: battery() { return (Battery&) state_machine(); }

void Drain::exit(const Event& e) {
    
    std::cout << "battery stops draining \n";
    
}


