#include <stdio.h>
#include <stdlib.h>

int main() {
    int var0 = 0, var1 = 0;
    int *result = 0;
    int calculate = 0;
    /*int nonpresult;*/

    printf("Enter the first number to calculate: ");
    scanf("%d", &var0);

    printf("Enter the second number to calculate: ");
    scanf("%d", &var1);

    calculate = (var0+var1);
    result = &calculate;

    printf("%d \n", *result);



    return 0;
}
