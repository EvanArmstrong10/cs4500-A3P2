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

    -bool equals() checks equality between this Column and the given Object

    -size_t size() returns the size of this column

BoolColumn, IntColumn, FloatColumn and StringColumn all inherit Column's methods.

We elected to use duplicate code for the primitive types instead of wrapper classes to save memory. 
If the object is to work with large files, larger wrapper classes would bog down memory and performance.
