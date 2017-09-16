
#include <stdio.h>
#include <string.h>

int letter_count(char a[], int len) {

    int uppercase_count = 0, lowercase_count = 0;

    int index = 0;

    while (index != len) {
        if (a[index] != ' ' && (a[index] >= 'A' && a[index] <= 'Z')) {
            uppercase_count++;
        }

        if (a[index] != ' ' && (a[index] >= 'a' && a[index] <= 'z')) {
            lowercase_count++;
        }
        index++;
    }

    printf("\nUppercase Letter Count: %d\n", uppercase_count);
    printf("\nLowercase Letter Count: %d\n", lowercase_count);
    return 0;
}

int printX() {
    typedef int boolean;
#define true 1
#define false 0
    int user_input;
    int i;
    int k = 0;
    printf("Enter a number: \n");
    scanf("%d", &user_input);

    for (i = 1; i <= user_input; i++) {

        boolean caught = false;
        boolean three = false;
        boolean five = false;

        if (k % 15 == 0) {
            printf("\n");
        }

        if (i % 11 == 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
            k++;
            printf("%d ", i);
            i += 1;
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0 && i % 7 != 0) {
            k++;
            printf("%s ", "fifteen");
            caught = true;
        }
        if (i % 5 == 0 && i % 7 != 0 && !caught) {
            k++;
            printf("%s ", "five");
            five = true;
        }
        if (i % 3 == 0 && i % 7 != 0 && !caught) {
            k++;
            printf("%s ", "three");
            three = true;
        }
        if (i % 7 != 0 && !caught && !three && !five) {
            k++;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


int main() {


    int letter_count_including_spaces = 0;

    char array[80];
    printf("\nEnter a string: \n");
    fgets(array, 80, stdin);

    while ((array[letter_count_including_spaces] >= 'a' && array[letter_count_including_spaces] <= 'z') ||
           (array[letter_count_including_spaces] >= 'A' && array[letter_count_including_spaces] <= 'Z') || (
                   array[letter_count_including_spaces] == ' ')) {
        letter_count_including_spaces++;
    }

    printf("The letter count is: %d\n", letter_count_including_spaces);


    printf("The string you have entered is: %s", array);

    letter_count(array, letter_count_including_spaces);



    /*
     * print(x) stuff
     */

   /*  printX();*/

    return 0;
}
