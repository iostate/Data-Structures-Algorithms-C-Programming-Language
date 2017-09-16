//
// Created by Quan Truong on 9/1/17.
//

#include <stdio.h>
#define length 4


int main() {

    int a = 2;
    int b = 4;

    int z[length] = {1, 2, 3, 4};

    int ii;
    if (b > a)
        for (ii = 0; ii < length; ii++) {
            printf("%d\n", z[ii]);
        }



int m = 26;
    int twoZ = 52;
    int y = 25;

    if (m > y) {
        printf("2\n");
        if (m < twoZ) {

            printf("1\n");

            if (a < m) {
                printf("ok\n");
            }
        } else {
            printf("ok");
        }

        return 0;
    }
}