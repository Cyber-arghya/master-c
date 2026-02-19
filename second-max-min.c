#include <stdio.h>
#include <limits.h>

/**
 * Finds the second largest and second smallest elements in an array.
 * Uses a single-pass O(n) approach.
 */
void findSecondExtremes(int arr[], int n) {
    if (n < 2) {
        printf("Array needs at least 2 unique elements.\n");
        return;
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
      

        int val = arr[i];
       
        // Update Maxima
        if (val > max1) {
            max2 = max1;
            max1 = val;
           
        } else if (val > max2 && val < max1) {
            max2 = val;
           

        // Update Minima
        if (val < min1) {
            min2 = min1;
            min1 = val;
           
        } else if (val < min2 && val > min1) {
            min2 = val;
           
        }
        printf("Val: %d | Max1: %d, Max2: %d | Min1: %d, Min2: %d\n", val, max1, max2, min1, min2);
        
    }

    printf("Second Largest: %d\n", max2);
    printf("Second Smallest: %d\n", min2);
}

int main() {
    int arr[] = {12, 35, 15, 13, 1, 10, 34, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondExtremes(arr, n);

    return 0;
}