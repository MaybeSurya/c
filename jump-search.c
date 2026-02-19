#include <stdio.h>
// Program to demonstrate jump search algorithm in C
// Curated by MaybeSurya

int main(){
    // Predefined sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Target element to search
    int target = 11;

    // Calculate the block size to be jumped
    int blockSize = 3;
    // Declare start and stop values for the search
    int start = 0;
    int end = blockSize;

    // Initialising While Loop to find the block where the target element is present
    while (end < n && arr[end - 1] < target) {
        start = end;
        end += blockSize;
        if (end > n) {
            end = n;
        }
    }

    // Linear search for the target in the identified block
    for (int i = start; i < end; i++) {
        if (arr[i] == target) {
            printf("Element found at index: %d\n", i);
            return 0;
        }
    }

    printf("Element not found in the array.\n");
    return 0;
}
