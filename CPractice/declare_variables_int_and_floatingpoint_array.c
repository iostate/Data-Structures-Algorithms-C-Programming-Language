//
// Created by Quan Truong on 8/31/17.
//

#include<stdio.h>

float farray[10] = {.4232131, .3123213,.213, .12321, .213213, .3123, .3213,
.1231232, .321321, .213213};

int num;

int main() {

    int ii;

    for(ii=0;ii<10;ii++) {
        printf("farray[%d] = %f\n", ii, farray[ii]);
    }


    printf("num is %d", num);



    return 0;
}
