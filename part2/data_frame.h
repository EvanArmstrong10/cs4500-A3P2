// lang::CwC

#pragma once
#include "column.h"
#include "object.h"
#include "string.h"
#include <stdlib.h>

class DataFrame: public Object {

    public:

        DataFrame() {

        }

        // TODO: implement get, write README

        /* Inherited from Object, prints this DataFrame */
        void print() {
            return;
        }

        /* Returns the object at the given row and column values*/
        Object* get(int x, int y) {
            return 0;
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

        /* Changes the label at the given Column index to the given String */
        void col_rename(size_t i, String* s) {
            return;
        }

        /* Changes the label of the row at the given index*/
        void row_rename(size_t i) {
            return;
        }

        /* Removes the given Column from this DataFrame and returns it*/
        Column* pop(Column* col) {
            return;
        }

        //or

        /* Removes the given Column from this Dataframe*/
        void del(Column* col) {
            return;
        }

        /* Removes the row at the given index */
        void rdel(size_t i) {
            return;
        }

        /* Checks equality between this DataFrame and the given Object */
        bool equals(Object* o) {
            
        }

        

};

