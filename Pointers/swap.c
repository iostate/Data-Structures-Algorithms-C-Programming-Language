#include <stdio.h>

/*forward declaration*/
void swap(int *px, int *py);

/*Interchange the actual values stored at the memory
 * location of these variables*/
void swap(int *px, int *py) {

    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

int main() {

    int a = 4, b = 2;
    /* The & operator switches the value that is stored at this particular
     * variable */
    swap(&a,&b);
    printf("a = %d and b = %d\n", a, b);


    return 0;
}


