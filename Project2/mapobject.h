#ifndef C_MAPOBJECT_H
#define C_MAPOBJECT_H

#endif

#define const int LABEL_LEN 20;

/*void get_object(struct object_t *objectname);*/

/* Problem was defining as a constant */

enum object_type_t {
    CAR, TREE, POLICE, OBSTACLE, EMPTY
};

typedef struct object_t {

    char label[20];
    int xloc, yloc;
    float speed;
    int direction;
    enum object_type_t type;

} object;
