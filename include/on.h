#ifndef _ON_H
#define _ON_H

#include "device.h"

namespace device {

    using namespace std::chrono;
    using namespace elma;

    class Device;  // Declare containing class so it can be refered to here
                      // before it is defined in trans.h 

    //! The on state of the trans
    class On : public State {        
        friend class Device;
        public:
        //! Build a new on state
        On() : State("on") {}
        void entry(const Event& e) {}
        void during() {}

        //! Perform actions required when switching from on to others
        //! \param e The event that triggered the transition        
        void exit(const Event&);

        Device& device();        

    };

}

#endif