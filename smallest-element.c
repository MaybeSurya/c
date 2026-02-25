#include <stdio.h> // Include the standard input/output library for using printf function
int main(){ // Main function where the execution of the program begins
    int data[] = {5, 2, 9, 67, 5, 6}; // Initialize an array of integers with some values
    int size = sizeof(data) / sizeof(data[0]); // Calculate the size of the array by dividing the total size of the array by the size of a single element
    int minval = data[0]; // Initialize minval with the first element of the array
    for(int i = 1; i < size; i++){ // Loop through the array starting from the second element
        if(data[i] < minval){ // If the current element is less than minval
            minval = data[i]; // Update minval to the current element
        }
    }
    printf("The minval element is: %d\n", minval); // Print the smallest element found in the array
    return 0; // Return 0 to indicate that the program ended successfully
}
