#include <stdio.h>
#include"mapobject.h"

void print_struct_info(struct object);

int main() {

    struct object quan;
    quan.xloc = 2;
    quan.label = "OJSOajs";
    quan.yloc = 4;

    print_struct_info(quan);


    return 0;
}

/*Print the information for a structure of type object*/
void print_struct_info(struct object name) {

    printf("%s Information: \n", name.label);
    printf("xloc = %d \n", name.xloc);
    printf("yloc = %d \n", name.yloc);
    printf("speed = %f \n", name.speed);
    printf("direction = %d \n", name.direction);
}

