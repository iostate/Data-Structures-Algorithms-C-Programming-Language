//
// Created by Quan Truong on 8/31/17.
//

#include<stdio.h>

//forward declarations
int main();
char package(int level);

//int main () {
//    int a = 5;
//    int b; /* Ask the user for input */
//    printf("\nEnter a number: \n");
//    scanf("%d", &b);
//    if (b >= a) {
//        printf("%d is larger than or equal to %d", b, a);
//    } else if (b<= a){
//        printf("%d is less than or equal to %d", b, a);
//    }
//    return 0;
//}

int main() {


    //practice a switch statement
    int userinput;
    printf("Enter a number: \n");
    scanf("%d", &userinput);


    printf("The number you have entered is: %d\n", userinput );

    char word = package(userinput);


    int ii;

    for (ii = 0; ii < 10; ii++) {
        printf("%c", word[ii]);
    }




}


char package(int level) {

    char *resultingPackage = "";

    switch (level) {

        case (100): *resultingPackage = (char) "Lowly";
            break;
        case (200): *resultingPackage = (char) "Medium";
            break;
        case (300): *resultingPackage = (char) "Highly";
            break;
    }

    return *resultingPackage;


}