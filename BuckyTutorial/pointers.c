#include <stdio.h>
#include <stdlib.h>

int main() {

    int mkm[3] = {3, 4, 5};

    int * ptr = &mkm[0];

    /*printf("%p", &ptr);*/
    int i;
    printf("Address of mkm = %p \n", *ptr);

    printf("Element \t Address \t Value\n");
    for (i = 0; i < 3; i++) {
        printf("mkm[%d] \t %p \t %d\n", i, &mkm[i], mkm[i]);
    }

    printf("Element \t Address\n");
    printf("mkm[] \t %d \n", &mkm);

    i = 0;
    while (i < 3) {
        printf("Value \t \t %d\n", mkm[i++]);
    }




    return 0;
}
