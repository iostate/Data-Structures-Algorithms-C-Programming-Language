#include <stdio.h>
#include "printd_recursive.h"

#define dprint(expr) printf(#expr " = %g\n", expr)
#define paste(front, back) front ## back

int main() {
    /*Declarations*/
    int which_is_greater;
    double x, y;
    char concat[] = "name";
    char concat_two[] = "1";

    /*Recursive call to printd, which is in header file*/
    printd(-4188);
    printf("\n");

    /*Print which number is greater from the two arguments*/
    which_is_greater = max(-6.0,-4.0);
    printf("%d \n", which_is_greater);

    /* Use the # operator in order to replace expression.
     * # Operator inserts quotes around a parameter.
     *
     * Example dprint (x/y) will output "x/y" and also concatenate
     * it to the next element. See dprint declaration at top.
     */


    x = 2.0;
    y = 4.0;
    dprint(x/y);

    printf(x ## y);

    return 0;
}


