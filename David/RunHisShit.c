#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num;

    int i;
    int j = 0;

    printf("Enter new number");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        if (j % 15 == 0){
            printf("\n");
        }
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%s", "fifteen ");
        }
        if (i % 11 == 0 && i % 7 != 0 && i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
            i += 1;
            j++;
            continue;
        }
        if (i % 7 != 0 && i % 3 != 0 && i % 5 != 0) {
            printf("%d ", i);
        }
        if (i % 3 == 0 && i % 7 != 0 && i % 15 != 0) {
            printf("%s", "three ");
        }
        if (i % 5 == 0 && i % 7 != 0 && i % 15 != 0) {
            printf("%s", "five ");
        }
        j++;
    }
    printf("");
    return 0;
}
