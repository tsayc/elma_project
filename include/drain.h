#ifndef _DRAIN_H
#define _DRAIN_H

#include "battery.h"

namespace battery {

    using namespace std::chrono;
    using namespace elma;

    class Battery;  // Declare containing class so it can be refered to here
                      // before it is defined in trans.h 

    //! The on state of the trans
    class Drain : public State {        

        public:
        //! Build a new Drain state
        Drain() : State("drain") {}
        void entry(const Event& e) {}
        void during() {}

        //! Perform actions required when switching from drain to other state
        //! \param e The event that triggered the transition        
        void exit(const Event&);

        Battery& battery();        

    };

}

#endif