/**
 * A program that sorts an array and then prints the highest value in the array.
 */
#include <stdio.h>

/**
 * Sort an array and return the highest value.
 * @param array int[] Array to be sorted
 * @param length int Length of array to be sorted
 * @return int The largest value in the array
 */
 int array_max(int array[], int length) {
    int arrayLength = length - 1;
    int ii;

    int kk;

    int temp;
    for (kk = 0; kk < length; kk++) {
        for (ii = 0; ii < arrayLength; ii++) {
            if (array[ii] > array[ii+1]) {
                temp = array[ii];
            }
        }
    }
    return temp;
}

int main() {
    int a[9] = {1,5,2,7,8,42,16,32};
    int kk;

    printf("The array's elements are: ");
    for (kk = 0; kk  < 9; kk++){
        printf("%d ", a[kk]);
    }

    printf("\nThe largest element in the array is: %d\n", array_max(a,8));
    return 0;
}
