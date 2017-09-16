/* Quiz 3 - create a header file
 *
 * Read the chapter 2 notes
 *
 *
 * To compile:
 * gcc -std=c89 -pedantic -ansi -Wall activity3.c
 *
 * */

#include<stdio.h>
#include"mymath.c"

int main() {
    int radius;
    double area;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = PI * square(radius);
    printf ("The area of a circle with radius %d is %.2f\n", radius, area);
    return 0;
}

