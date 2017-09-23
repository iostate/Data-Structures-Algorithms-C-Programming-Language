#include "mapobject.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Convert a string (character array) to an enum type.
 *
 * @param user_input_for_enum char * User input that will be converted to an enum
 * @return object_type_t Enumerated type for the object_t
 */
object_type_t string_to_type(char *user_input_for_enum) {
    object_type_t result;
    if (strncmp(user_input_for_enum, "car", LABEL_LEN) == 0) {
        result = CAR;
    } else if (strncmp(user_input_for_enum, "tree", LABEL_LEN) == 0) {
        result = TREE;
    } else if (strncmp(user_input_for_enum, "police", LABEL_LEN) == 0) {
        result = POLICE;
    } else if (strncmp(user_input_for_enum, "obstacle", LABEL_LEN) == 0) {
        result = OBSTACLE;
    } else if (strncmp(user_input_for_enum, "empty", LABEL_LEN) == 0) {
        result = EMPTY;
    }
    return result;
}

/**
 * Convert the enum type to a string representation
 * @param name Type of object
 * @return char * string representation of the enum type
 */
char *type_to_string(object_type_t name) {
    char *result;
    if (name == CAR) {
        result = "car";
    } else if (name == TREE) {
        result = "tree";
    } else if (name == POLICE) {
        result = "police";
    } else if (name == OBSTACLE) {
        result = "obstacle";
    } else {
        result = "empty";
    }
    return result;
}

/**
 * Return a one character representation of an object type.
 * @param type object_type_t Type of the object
 * @return char One character map representation of that object
 */
char get_map_representation(object_type_t type) {
    if(type == CAR) {
        return 'X';
    } else if (type == TREE) {
        return 'T';
    } else if (type == POLICE) {
        return 'P';
    } else if (type == OBSTACLE) {
        return 'O';
    } else if (type == EMPTY) {
        return ' ';
    }


}


/*
 * BUG LIST:
 * 1) Not able to print the char array. Solution: Was attempting to assign char array using
 * scanf to user_label, however, you can only copy into an array and NOT assign values. Use strcpy.
 *
 * 2) Was not able to assign the values to other members (xloc, yloc specifically). Solution: Use the pointer
 * symbol, -> ,  to direct the value to the member.
 *
 * 3) Multiple header files. Solution: Ensure that all files are linked, but do not overinclude links to a file.
 * 4) Problem either printing, or assigning enum type as a char. 
 *
 *
 */
