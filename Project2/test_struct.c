#include <stdio.h>
#include "mapobject.c"


int main() {


    struct object_t *pointer;
    struct object_t quan;

    pointer = &quan;


    get_object(pointer);

    print_struct_info(pointer);

    return 0;
}


