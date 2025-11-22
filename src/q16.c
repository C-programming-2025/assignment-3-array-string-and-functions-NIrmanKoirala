// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.

#include <stdio.h>
void reverseArray(int arr[], int size) {
    int i;
    // Reversing the array
    for(i = 0; i < size / 2; i++){
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}