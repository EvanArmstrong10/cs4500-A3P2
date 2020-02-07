// lang::CwC

#pragma once
#include "object.h"
#include "string.h"
#include "data.h"


// TODO: implement get(), potentially implement more methods


class Column: public Object {

    public:

        /* Default Column constructor */
        Column() {

        }

        /* Default Column destructor */
        ~Column() {

        }

        /* Inherited from Object, prints this Column */
        virtual void print() {
            return;
        }

        /* Returns size of this Column */
        virtual size_t size() {
            return 0;
        }

        /* Checks equality between this Column and the given Object */
        virtual bool equals(Object* o) {
            
        }

        /* Base get method, only called if dynamic dispatch doesn't work, returns null */
        virtual Data* get(char* s) {
        }

        /* Base get method, only called if dynamic dispatch doesn't work, returns null */
        virtual Data* get(int x) {
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
        size_t size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this BoolColumn and the given Object */
        bool equals(Object* o) {
            
        }

        /* Inherited from Column, returns the bool Data type at the given row name */
        Data* get(char* s) {
        }

        /* Inherited from Column, returns the bool Data type at the given row index */
        Data* get(int x) {
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
        }

        /* Inherited from Column, returns size of this IntColumn */
        size_t size() {
        }

        /* Inherited from Column, checks equality between this IntColumn and the given Object */
        bool equals(Object* o) {
            
        }

        /* Inherited from Column, returns the int Data type at the given row name */
        Data* get(char* s) {
        }

        /* Inherited from Column, returns the int Data type at the given row index */
        Data* get(int x) {
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
        }

        /* Inherited from Column, returns size of this FloatColumn */
        size_t size() {
        }

        /* Inherited from Column, checks equality between this FloatColumn and the given Object */
        bool equals(Object* o) {
            
        }

        /* Inherited from Column, returns the float Data type at the given row name */
        Data* get(char* s) {
        }

        /* Inherited from Column, returns the float Data typeat the given row index */
        Data* get(int x) {
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
        size_t size() {
            return 0;
        }

        /* Inherited from Column, checks equality between this StringColumn and the given Object */
        bool equals(Object* o) {
            
        }

        /* Inherited from Column, returns the String Data type at the given row name */
        Data* get(char* s) {
            return ;
        }

        /* Inherited from Column, returns the String Data type at the given row index */
        Data* get(int x) {
            return ;
        }
};