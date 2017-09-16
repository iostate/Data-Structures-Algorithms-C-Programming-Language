#ifndef C_MAPOBJECT_H
#define C_MAPOBJECT_H

#endif

#define LABEL_LEN 20;

/* Problem was defining as a constant */

enum object_type_t {CAR, TREE, POLICE, OBSTACLE, EMPTY};

typedef struct object {

char * label;
int xloc, yloc;
float speed;
int direction;
enum object_type_t type;

} object_t;
