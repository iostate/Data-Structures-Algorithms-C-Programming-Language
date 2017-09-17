#include <stdio.h>
#include "mapobject.c"


int main() {


    object *pointer;
    object quan;

    pointer = &quan;


    get_object(pointer);

    print_struct_info(pointer);

    return 0;
}


