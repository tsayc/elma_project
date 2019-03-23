#ifndef _DEVICE_H
#define _DEVICE_H

#include "elma/elma.h" // Note installation directory for elma

#include "on.h"

#include "off.h"

#include "charging.h"


#include "user_interface.h"

namespace device {

    using namespace std::chrono;
    using namespace elma;    

    //! A stop watch class, that inherits from StateMachine
    class Device : public StateMachine {

        public:
        //! Make a new Trans
        Device();
        

        
        
        private:

        // When overriding the StateMachine class, put state declarations here.
        On on;
        Off off;
        Charging charging;

        // Other private variables
        
    };

}

#endif