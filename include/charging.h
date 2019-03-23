#ifndef _CHARGING_H
#define _CHARGING_H

#include "device.h"

namespace device {

    using namespace std::chrono;
    using namespace elma;

    class Device;  // Declare containing class so it can be refered to here
                      // before it is defined in trans.h 

    //! The on state of the trans
    class Charging : public State {        

        public:
        //! Build a new on state
        Charging() : State("charging") {}
        void entry(const Event& e) {}
        void during() {}

        //! Perform actions required when switching from off to on
        //! \param e The event that triggered the transition        
        void exit(const Event&);

        Device& device();        

    };

}


#endif