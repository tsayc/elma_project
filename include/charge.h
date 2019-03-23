#ifndef _CHARGE_H
#define _CHARGE_H

#include "battery.h"

namespace battery {

    using namespace std::chrono;
    using namespace elma;
    //! The charge 
    class Battery;  // Declare containing class so it can be refered to here
                      // before it is defined in trans.h 

    //! The on state of the trans
    class Charge : public State {        

        public:
        //! Build a new on state
        Charge() : State("charge") {}
        void entry(const Event& e) {}
        void during() {}

        //! Perform actions required when switching from charge to drain. 
        //! \param e The event that triggered the transition        
        void exit(const Event&);

        Battery& battery();        

    };

}

#endif