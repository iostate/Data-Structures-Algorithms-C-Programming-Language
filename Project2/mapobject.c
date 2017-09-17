#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapobject.h"

void get_object(struct object_t * name);
void print_struct_info(struct object_t * name);
/**
 * Prompts the user for information, and then places that information inside the object.
 *
 * @param objectname object_t The object whose data will be filled.
 */
void get_object(struct object_t * objectname) {
    int user_xloc, user_yloc, user_direction;
    char user_label[50];
    float user_speed;




    printf("Enter the label: ");
    fgets(user_label, sizeof(user_label), stdin);
    strcpy(objectname->label, &user_label);

    printf("Enter the xloc: ");
    scanf("%d", &user_xloc);

    objectname -> xloc = user_xloc;

    printf("Enter the yloc: ");
    scanf("%d", &user_yloc);
    objectname -> yloc = user_yloc;

    printf("Enter the speed (double): ");
    scanf("%f", &user_speed);
    objectname -> speed = user_speed;

    printf("Enter the direction: ");
    scanf("%d", &user_direction);
    objectname -> direction = user_direction;

}



/**
 * Print the information of an object.
 *
 * @param name object_t The object whose information will be displayed.
 */
void print_struct_info(struct object_t * name) {

    printf("%s Information: \n", name->label);
    printf("xloc = %d \n", name->xloc);
    printf("yloc = %d \n", name->yloc);
    printf("speed = %f \n", name->speed);
    printf("direction = %d \n", name->direction);
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
 *
 *
 *
 */
