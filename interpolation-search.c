// C program for interpolation search algorithm
#include <stdio.h>
// Curated by MaybeSurya
int main(){
    // Predefined sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Target element to search
    int target = 11;

    // Initialising low and high indices
    int low = 0;
    int high = n - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        // Calculate the position using interpolation formula
        int pos = low + ((high - low) * (target - arr[low])) / (arr[high] - arr[low]);

        // Check if the target is found at pos
        if (arr[pos] == target) {
            printf("Element found at index: %d\n", pos);
            return 0;
        }

        // If target is greater, ignore the left half
        if (arr[pos] < target) {
            low = pos + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = pos - 1;
        }
    }

    printf("Element not found in the array.\n");
    return 0;
}
