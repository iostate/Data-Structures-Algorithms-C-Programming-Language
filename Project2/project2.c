#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"mapobject.h"
#include"map.h"
#include "basiclist.h"

#define BUFFERLEN 100

/**
 * Reads an object from string
 * @param buff String that is being read
 */
object_t * object_from_string(char * buff) {
    object_t * ret = malloc(sizeof(object_t));
    char * tok = strtok(buff, ",");
    printf("ENTRY : ");
    if(tok != NULL) {
        strncpy(ret->label, tok, LABEL_LEN);
        ret->xloc=atoi(strtok(NULL, ","));
        ret->yloc=atoi(strtok(NULL, ","));
        ret->speed=atof(strtok(NULL, ","));
        ret->direction=atof(strtok(NULL, ","));
        ret->type=string_to_type(strtok(NULL, "\n"));
    }
    print_object(ret);
    return ret;
}

/**
 * Read objects from a file and place them into a linked list
 * @param object_list node_t * Head node of where the data will be
 * placed
 */
void read_objects(node_t ** object_list) {

    FILE *fp;
    char buffer[BUFFERLEN];
    fp = fopen("objects.txt", "r");

    while (fgets(buffer, BUFFERLEN,fp)) {
        /*printf("%s", buffer);*/
        list_add(object_from_string(buffer), object_list);
    }
}

/**
 * Print the information of an object.
 *
 * @param name object_t The object whose information will be displayed.
 */
void print_object(object_t *name) {
    printf("%s Information: \n", name->label);
    printf("xloc = %d \n", name->xloc);
    printf("yloc = %d \n", name->yloc);
    printf("speed = %f \n", name->speed);
    printf("direction = %d \n", name->direction);
    const char the_type[LABEL_LEN];
    strcpy(the_type, type_to_string(name->type));
    /*char p_type = &the_type;*/
    printf("enum = %s \n\n", the_type);
}

/**
 * Prints all objects in a linked list
 * @param curr node_t Head node to be searched through
 */
void print_objects(const node_t *curr) {
    while (curr != NULL) {
        print_object(curr->data);
        curr = curr->next;
    }
}


/**
 * Finds all objects of a specified type. Also prints the label,
 * location, and speed of the object found.
 *
 * @param list node_t Head node of a list of objects to search through
 * @param term object_type_t Type of object to search for
 */
void find_all_of_type(node_t *list, object_type_t term) {
    while (list != NULL) {
        object_t * current_item = list->data;
        if (current_item->type == term) {
            printf("%s is a match\n ", current_item->label);
            printf("The coordinates are (%d, %d)\n",
                   current_item->xloc, current_item->yloc);
            printf("The direction is %d\n", current_item->direction);
            printf("The speed is %f\n\n", current_item->speed);
        }
        list = list->next;
    }
}

/**
 * Finds an object of a given label name
 * @param list node_t List of all the objects to search through
 * @param target The target label to find
 */
void find_object(node_t *list, const char *target){
    while (list != NULL) {
        object_t * current_item = list->data;
        if (strncmp(target, current_item->label, LABEL_LEN) == 0) {
            printf("The coordinates for %s are (%d, %d)\n", current_item->label, current_item->xloc, current_item->yloc);
            printf("The speed of the object is %f\n",
                   current_item->speed);
        }
        list = list->next;
    }
}

int main ()
{
    /*Create new list and read objects in*/
    node_t * object_list = NULL;
    read_objects(&object_list);

    /*Add two objects into the list*/
    object_t quan;
    object_t * p_quan = &quan;
    strcpy(p_quan->label, "GODZILLA");
    p_quan->xloc = 2;
    p_quan->yloc = 3;
    p_quan->speed = 20.0;
    p_quan->direction = 2;
    p_quan->type = CAR;
list_add(p_quan,&object_list);
    object_t tree;
    object_t * p_tree = &tree;
    strcpy(p_tree->label, "CAPTAIN AMURRICA");
    p_tree->xloc = 2;
    p_tree->yloc = 3;
    p_tree->speed = 20.0;
    p_tree->direction = 2;
    p_tree->type = CAR;
    list_add(p_tree,&object_list);


    new_map(object_list, 30,16);
    print_map();

    printf("\nprint_objects():\n");
    print_objects(*(&object_list));

    printf("\nfind_all_of_type(CAR):\n");
    find_all_of_type(object_list, CAR);

    printf("\nfind_object(RedCar):\n");
    find_object(object_list, "RedCar");

    return 0;
}

