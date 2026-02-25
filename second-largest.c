#include <stdio.h> // Include the standard input/output library for using printf function
int main(){ // Main function where the execution of the program begins
    int data[] = {5, 2, 9, 67, 5, 6}; // Initialize an array of integers with some values
    int size = sizeof(data) / sizeof(data[0]); // Calculate the size of the array by dividing the total size of the array by the size of a single element
    int maxval = data[0]; // Initialize maxval with the first element of the array
    int second_max = data[0]; // Initialize second_max with the first element of the array
    for(int i = 1; i < size; i++){ // Loop through the array starting from the second element
        if(data[i] > maxval){ // If the current element is greater than maxval
            second_max = maxval; // Update second_max to the current maxval before updating maxval
            maxval = data[i]; // Update maxval to the current element
        }
        else if(data[i] > second_max && data[i] < maxval){ // If the current element is greater than second_max and less than maxval
            second_max = data[i]; // Update second_max to the current element
        }
    }
    printf("The maxval element is: %d\n", maxval); // Print the largest element found in the array
    printf("The second largest element is: %d\n", second_max); // Print the second largest element found in the array
    return 0; // Return 0 to indicate that the program ended successfully
}
