#include<stdio.h>
#include<stdlib.h>

/* forward declarations */

int array_max(int array[], int len);
void quicksort(int ok[]);

int main() {

    int a[4] = {3,4,2,7,5};

    int n = sizeof(a) / 4;

    printf("size of is %d", n);
//    array_max(a, n);


    return 0;
}


//
//int array_max(int a[], int len) {
//
//    int result;
//    quicksort(a);
//    result = a[len];
//return result;
//}
//
///**
// * Sort an array, quickly.
// *
// * @param left The leftmost index of the array
// * @param right The rightmost index of the array
// */
//void quicksort(int theArray[]) {
//
//    int sizeOfArray = sizeof(theArray);
//    int left = 0;
//    int right = theArray[sizeOfArray];
//
//    if (right - left <= 0) {
//        return;
//    }
//    else {
//        int pivot = theArray[right];
//        int pivotLocation = partitionArray(theArray, left, right, pivot);
//    }
//}
//
//int partitionArray(int theArray[], int left, int right, int pivot) {
//
//    int leftPointer = left - 1;
//    int rightPointer = right;
//
//    while (0 == 0) {
//
//        while (theArray[++leftPointer] < pivot);
//
//        while (rightPointer > 0 && theArray[--rightPointer] > pivot);
//
//        if (leftPointer >= rightPointer) {
//
//            break;
//
//        } else {
//
//            swapValues(theArray, leftPointer, rightPointer);
//
//        }
//
//    }
//
//    swapValues(theArray, leftPointer, right);
//
//    return leftPointer;
//
//}
//
//void swapValues(int theArray[], int indexOne, int indexTwo) {
//    int temp = theArray[indexOne];
//    theArray[indexOne] = theArray[indexTwo];
//    theArray[indexTwo] = temp;
//}
