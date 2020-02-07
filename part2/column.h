// lang::CwC

#pragma once
#include "object.h"
#include "string.h"

class Column: public Object {

    public:

        /* Default Column constructor */
        Column() {

        }

        /* Default Column destructor */
        ~Column() {

        }

        // TODO: implement get

        /* Inherited from Object, prints this Column */
        virtual void print() {
            return;
        }

        /* Returns size of this Column */
        virtual int size() {
            return 0;
        }

        /* Checks equality between this Column and the given Object */
        virtual bool equals(Object* o) {
            
        }

        

};

class BoolColumn: public Column {

    public:

        /* Default BoolColumn constructor */
        BoolColumn() {

        }

        /* Inherited from Column, default BoolColumn destructor */
        ~BoolColumn() {
            
        }

        /* Inherited from Column, prints this BoolColumn */
        void print() {
            return;
        }

        /* Inherited from Column, Returns size of this BoolColumn */
        int size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this BoolColumn and the given Object */
        bool equals(Object* o) {
            
        }
};

class IntColumn: public Column {

    public:

        /* Default IntColumn constructor */
        IntColumn() {
            
        }

        /* Inherited from Column, default IntColumn destructor */
        ~IntColumn() {
            
        }

        /* Inherited from Column, prints this IntColumn */
        void print() {
            return;
        }

        /* Inherited from Column, returns size of this IntColumn */
        int size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this IntColumn and the given Object */
        bool equals(Object* o) {
            
        }
};

class FloatColumn: public Column {

    public:

        /* Default FloatColumn constructor */
        FloatColumn() {
            
        }

        /* Inherited from column ,default FloatColumn destructor */
        ~FloatColumn() {
            
        }

        /* Inherited from Column, prints this FloatColumn */
        void print() {
            return;
        }

        /* Inherited from Column, returns size of this FloatColumn */
        int size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this FloatColumn and the given Object */
        bool equals(Object* o) {
            
        }
};


class StringColumn: public Column {

    public:

        /* Default StringColumn constructor */
        StringColumn() {
            
        }

        /* Inherited from column ,default StringColumn destructor */
        ~StringColumn() {
            
        }

        /* Inherited from Column, prints this StringColumn */
        void print() {
            return;
        }

        /* Inherited from Column, returns size of this StringColumn */
        int size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this StringColumn and the given Object */
        bool equals(Object* o) {
            
        }
};