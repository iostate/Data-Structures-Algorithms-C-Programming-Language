#include<stdio.h>
int main() {

    int a[2] = {1,2,3};
    double b[4] = {2,4,3.14, 2.718291};
    char c[6] = {'H', 'e', 108, 100, 76, 'o'};
    char d[] = "world!"; /* prints each letter by itself */
    int ii;

    printf("\nPrinting the a array...\n");
    for (ii=0; ii<2; ii++) {
        printf("a[%d]=%d\n", ii, a[ii]);
    }

/* ii resets implicitly */
    printf("\nPrinting the double array with no size specified.");
    for (ii=0;ii<4; ii++) {
        printf("b[%d]=%g\n", ii, b[ii]);
    }

    printf("\nChar array....\n");
    for (ii=0; ii <7; ii++) {
        printf("c[%d]=%c\n", ii, c[ii]);
    }

    printf("Printing the ascii values in the world hello!\n");
    for (ii = 0; ii <7; ii++) {
        printf("d[%d]=%c\n", ii, d[ii]);
    }

    return 0;
}