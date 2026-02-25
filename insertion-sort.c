#include <stdio.h> // Include the standard input/output library for using printf function
int main() { // Main function where the execution of the program begins
    int arrx[] = {9,7,4,6,2,3,5,7,1,8}; // Initialize an array of integers with some values
    int size = sizeof(arrx) / sizeof(arrx[0]); // Calculate the size of the array by dividing the total size of the array by the size of a single element
    int x, y, tmp; // Declare variables for loop counters and temporary variable for swapping
    for (x = 1; x < size; x++) { // Loop through the array starting from the second element to the end of the array
        tmp = arrx[x]; // Store the value at index x in a temporary variable
        y = x - 1; // Initialize y to the index of the last sorted element (one position before x)
        while (y >= 0 && arrx[y] > tmp) { // Loop while y is non-negative and the current element at index y is greater than the value stored in tmp
            arrx[y + 1] = arrx[y]; // Shift the element at index y to the right (to index y + 1)
            y = y - 1; // Move y one position to the left (decrement y) to continue checking the next element in the sorted portion of the array
}
        arrx[y + 1] = tmp; // Insert the value stored in tmp into its correct position in the sorted portion of the array (at index y + 1)
    }
    for (x = 0; x < size; x++) { // Loop through the sorted array to print each element
        printf("%d ", arrx[x]); // Print the current element followed by a space
    }
    return 0; // Return 0 to indicate that the program ended successfully
}
