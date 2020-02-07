// lang::CwC

#pragma once
#include "object.h"

class String: public Object {

    public:

        /* Default String constructor */
        String() {

        }

        /* Default Object destructor*/
        ~String() {

        }

        /* Inherited from Object, checks equality between a String and an Object */
        bool equals(Object* const o) {
            return false;
        }

        /* Inherited from Object, prints this string */
        void print() {
            return;
        }

        /* Returns the current length of the String */
         size_t size() {
            return 0;
        }

        /** Compares strings based on alphabetical order
        * < 0 -> this String is less than String s
        * = 0 -> this String is equal to String s
        * > 0 -> this String is greater than String s
        */
       int cmp(String* s) {
           return 0;
       }

       /* Creates a new String by combining two existing Strings */
       String* concat(String* s) {
           return;
       }


};