//
// Created by Quan Truong on 9/2/17.
//

//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "QuanInfo.h"

int main() {

    //Need to set aside 14 bytes of memory
    char name[14] = "Quan Truong";
    name[0] = 'M';
    printf("My name is %s \n", name);


    char food[] = "pizza";

    //Change food array with strcopy
    strcpy(food, "bacon");
    printf("The best food is %s \n", food);


    //Print the constant MYNAME
    printf("My name is %s and my age is %d\n", MYNAME, MYAGE);


typedef int boolean;
#define true 1
#define false 0

    int a = 7, b = 9;

    (a>b==true) ? printf("a is greater than b") : printf("a is not greater than b\n");

    int friends = 87;

    printf("I have %d friend%s\n", friends, (friends!=1) ? "s" : "" );



    return 0;
}