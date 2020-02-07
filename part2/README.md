# cs4500-A3P2

This API has the following classes:

    -DataFrame

    -Column

        -BoolColumn

        -IntColumn

        -FloatColumn

        -String Column

    -Object

    -String

    -Data

Data class:

    -Data is a union which includes the following data types bool, int, float and string

    -We chose to use a union to facilitate dynamic dispatch between get methods

Object class:

    -equals() checks if two objects are equal

    -print() prints out this object

String class:

    -size_t size() returns size of string

    -int cmp(String s) compares 2 strings

    -bool equals(Object o) checks if 2 strings are equal

    -String* concat(String* s) adds given string to this string

    -void trim() Removes leading and trailing spaces from this String

    -void print() Prints this String

Column class:

    -void print() prints this column

    -bool equals() checks equality between this column and the given Object

    -size_t size() returns the size of this column

    -Data get(size_t x) returns the data type at the index x

    -Data get(char* s) returns the data type at the row name s

        -Note: The get methods in the parent Column class should only be called if dynamic dispatch fails
               They will both return null

BoolColumn, IntColumn, FloatColumn and StringColumn all inherit Column's methods.

We elected to use duplicate code for the primitive types instead of wrapper classes to save memory. 
If the object is to work with large files, larger wrapper classes would bog down memory and performance.

DataFrame class:

    -void print() prints this dataframe

    -int nrow() returns the number of rows in this dataframe

    -int ncol() returns the number of columns in this dataframe

    -void insert(Column* col) inserts given column into dataframe

    -char** columns() returns a list of the lables of the columns (headers) in this dataframe

    -void col_rename(size_t i, char* s) changes the label at the given column to the given char*

    -void row_rename(size_t i, char* s) changes the row name at the given index to the given char*

    -void cdel(char *h) removes the column at the given header

    -void rdel(size_t i) removes the row at the given index

For user friendliness we chose to make 4 functions to handle gets: get_bool, get_int, get_float and get_string
Each of these functions has 4 signatures, taking in 2 indices, 1 index and 1 column header, 1 row name and 1 index, or row name and column header
The goal is to make it easy for users to get values, regardless of how the form their query
