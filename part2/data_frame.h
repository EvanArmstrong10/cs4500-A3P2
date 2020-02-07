// lang::CwC

#pragma once
#include "column.h"
#include "object.h"
#include "string.h"
#include <stdlib.h>
#include "data.h"


// TODO: implement get(), write README, potentially add more methods


class DataFrame: public Object {

    public:

        /* Default Column constructor */
        DataFrame() {

        }

        /* Inherited from Object, prints this DataFrame */
        void print() {
            return;
        }

        /* Returns the number of rows in this DataFrame*/
        int nrow() {
            return 0;
        }

        /* Returns the number of columns in this DataFrame*/
        int ncol() {
            return 0;
        }

        /* Inserts given column into this DataFrame*/
        void insert(Column* col) {
            return;
        }

        /* Returns a list of the labels of the columns (header) in this DataFrame */
        char** columns() {
            return ;
        }

        /* Changes the label at the given Column index to the given char* */
        void col_rename(size_t i, char* s) {
            return;
        }

        /* Changes the label of the row at the given index to the given char* */
        void row_rename(size_t i, char* s) {
            return;
        }

        /* Removes the Column at the given header from this Dataframe*/
        void cdel(char* h) {
            return;
        }

        /* Removes the row at the given index */
        void rdel(size_t i) {
            return;
        }

        /* Returns the bool at the given indices */
        bool get_bool(size_t x, size_t y) {}

        /* Returns the bool at the given row index and column header */
        bool get_bool(size_t x, char* y) {}

        /* Returns the bool at the given row name and column index */
        bool get_bool(char* x, size_t y) {}

        /* Returns the bool at the given row and column names */
        bool get_bool(char* x, char* y) {}



        /* Returns the int at the given indices */
        int get_int(size_t x, size_t y) {}

        /* Returns the int at the given row index and column header */
        int get_int(size_t x, char* y) {}

        /* Returns the int at the given row name and column index */
        int get_int(char* x, size_t y) {}

        /* Returns the int at the given row and column names */
        int get_int(char* x, char* y) {}



        /* Returns the float at the given indices */
        float get_float(size_t x, size_t y) {}

        /* Returns the float at the given row index and column header */
        float get_float(size_t x, char* y) {}

        /* Returns the float at the given row name and column index */
        float get_float(char* x, size_t y) {}

        /* Returns the float at the given row and column names */
        float get_float(char* x, char* y) {}



        /* Returns the String at the given indices */
        String* get_string(size_t x, size_t y) {}

        /* Returns the String at the given row index and column header */
        String* get_string(size_t x, char* y) {}

        /* Returns the String at the given row name and column index */
        String* get_string(char* x, size_t y) {}

        /* Returns the String at the given row and column names */
        String* get_string(char* x, char* y) {}

        

};

