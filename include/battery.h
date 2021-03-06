#ifndef _BATTERY_H
#define _BATTERY_H

#include "elma/elma.h" // Note installation directory for elma

#include "drain.h"

#include "no_change.h"

#include "charge.h"


//#include "user_interface.h"

namespace battery {

    using namespace std::chrono;
    using namespace elma;    

    //! A Battery class that handles battery states
    class Battery : public StateMachine {

        public:
        //! Empty constructor
        Battery();
        

        
        
        private:

        // When overriding the StateMachine class, put state declarations here.
        Drain drain;
        No_change no_change;
        Charge charge;
        // Other private variables
        
    };

}

#endif