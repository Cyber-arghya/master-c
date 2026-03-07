#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

   
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second Largest = %d\n", secondLargest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     
//     for(int i = 0; i < n-1; i++) {
//         for(int j = i+1; j < n; j++) {
//             if(arr[i] > arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("Second Smallest = %d\n", arr[1]);
//     printf("Second Largest = %d\n", arr[n-2]);

//     return 0;
// }