// lang::CwC

#pragma once
#include <stdlib.h>

class Object {

    public:

        /* Default Object constructor */
        Object() {

        }

        /* Default Object destructor, to be overriden by subclasses */
        virtual ~Object() {

        }

        /* Checks equality between this Object and a given Object */
        virtual bool equals(Object* const o) {
        }

        /* Prints out this Object */
        virtual void print() {
        }
};