#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "define_struct.h"

/* forward declaration */
int main() {

    struct mystruct quan;
    char city[6]= "tempe";
    quan.age=25;
    strcpy(quan.city, city);
    printf("%d %s", quan.age, quan.city);




    return 0;
}
