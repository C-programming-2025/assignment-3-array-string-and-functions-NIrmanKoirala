// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.

#include <stdio.h>
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}