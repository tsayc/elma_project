#include <iostream>
#include <chrono>
#include <vector>

#include "battery.h"

using namespace std::chrono;
using namespace elma;
using namespace battery;

Battery&Charge:: battery() { return (Battery&) state_machine(); }

void Charge::exit(const Event& e) {
    
    std::cout << "battery is charged full";
    
}
