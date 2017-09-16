/*
 * Takes the number 2 and triples it.
 */

#include<stdio.h>

/*forward declarations*/
int triple_it(int x);

int main() {
    printf("%d",triple_it(2));
    return 0;
}

/**
 * Take a number and triple it.
 * @param x int Number to be tripled.
 * @return int The parameter x, but tripled.
 */
int triple_it(int x) {
    return (x * 3);
}
