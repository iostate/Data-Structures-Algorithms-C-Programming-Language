#include <stdio.h>
#include "func_practice3c.c"
/**
 * Retrieves the fibonacci sequence of a given number.
 * @param n The number whose fibonacci sequence will be gotten.
 * @return int The fibonacci sequence of the parameter, n, that was specified by the user.
 */
int fibonacci(int n) {


    /* Base case.*/
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

/**
 * Doubles the parameter
 * @param parameter The parameter will be doubled.
 */
void double_it(int * parameter) {

    *parameter = *parameter * 2;

    printf("The value of this parameter is %d\n", (*parameter));
}

/**
 * Triples the parameter
 * @param parameter int*  The parameter that will be tripled.
 *
**/
void triple_it(int * triple_parameter) {

  *triple_parameter = *triple_parameter * 3;

  printf("The value of the parameter tripled is %d\n", (*triple_parameter));

}

int main() {

    int user_int_input, user_double, user_triple;
    int * p;
    int * d;
    int fibonacci_twentyseven = 0;

    printf("Enter a number whose fibonnaci sequence you would like to find: ");
    scanf("%d", &user_int_input);
    fibonacci_twentyseven = fibonacci(user_int_input);
    printf("The fibonacci sequence of the number %d is %d\n", user_int_input, fibonacci_twentyseven);

    printf("Feed me a parameter to double: \n");
    scanf("%d", &user_double);
    p = &user_double;
    double_it(p);


    /* Begin tripling the parameter */
    printf("Feed me a parameter to triple: \n");
    scanf("%d", &user_triple);
    d = &user_triple;
    triple_it(d);

    return 0;
}
