#include <stdio.h>

int main() {

    int i = 12, *j = 0, **k = 18;
    printf("i = %d, j = %d, k = %d\n", i, j, k);


    printf("\ni = %p\n\n", &i);
    j = &i;

    printf("i = %d, j = %p, k = %d\n", i, j, k);
    *j = 24;
    printf("i = %d, j = %p, k = %d\n", i, j, k);
    /*printf("\nj = %p\n\n", *i);*/
    return 0;

}
