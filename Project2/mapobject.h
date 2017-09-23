#ifndef MAPOBJECT_H
#define MAPOBJECT_H
/* At some point, must declare forward de   clarations */
#include "map.h"

#define LABEL_LEN 20

typedef enum object_type {
    CAR, TREE, POLICE, OBSTACLE, EMPTY
} object_type_t;


typedef struct object {

    char label[LABEL_LEN];
    int xloc, yloc;
    float speed;
    int direction;
    object_type_t type;
} object_t;



void get_object(object_t *objectname);

object_type_t string_to_type(char *user_input_for_enum);

void print_object(object_t *name);

char *type_to_string(object_type_t name);
char get_map_representation(object_type_t type);

#endif
