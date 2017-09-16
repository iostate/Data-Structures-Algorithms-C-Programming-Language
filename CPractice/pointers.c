//
// Created by Quan Truong on 8/30/17.
//


#include<stdio.h>


/* constant of the array size */
#define SIZE 5
int main() {

    int a[SIZE];                /*array with defined size*/
    int * ptr;                  /* pointer to the integer */
    int jj;

    /* give the pointer the right size.. manually ..*/
    ptr = malloc(SIZE * sizeof(int));


    /* fill the array with some linear numbers */

    for (jj = 0; jj < SIZE; jj++) {
        a[jj] = jj;

    }


    return 0;
}