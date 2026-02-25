#include <stdio.h> // Include the standard input/output library for using printf function
int main() { // Main function where the execution of the program begins
    int arx [] = {1,2,3,4,5,0,9,8,7,6,10}; // Initialize an array of integers with some values
    int size = sizeof(arx) / sizeof(arx[0]); // Calculate the size of the array by dividing the total size of the array by the size of a single element
    int i, j, min_idx, tmp; // Declare variables for loop counters, minimum index, and temporary variable for swapping
    for (i = 0; i < size - 1; i++){ // Loop through the array starting from the first element to the second last element
        min_idx = i; // Initialize min_idx with the current index i
        for (j = i + 1; j < size; j++){ // Loop through the array starting from the element next to i to the end of the array
            if (arx[j] < arx[min_idx]){ // If the current element is less than the element at min_idx
                min_idx = j; // Update min_idx to the current index j
            }
        }
        tmp = arx[i]; // Store the value at index i in a temporary variable
        arx[i] = arx[min_idx]; // Update the value at index i to the value at min_idx
        arx[min_idx] = tmp; // Update the value at min_idx to the value stored in the temporary variable (original value at index i)
    }
    printf("Sorted array: \n"); // Print a message indicating that the array is sorted
    for (i = 0; i < size; i++){ // Loop through the sorted array to print each element
        printf("%d ", arx[i]); // Print the current element followed by a space
    }
    return 0; // Return 0 to indicate that the program ended successfully
}
