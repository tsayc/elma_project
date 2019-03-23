#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;

Battery&No_change:: battery() { return (Battery&) state_machine(); }

void No_change::exit(const Event& e) {
    
    std::cout << "battery start changing";
    
}

