#include <stdio.h>




void full(int arr[], int size) {
    for (int i = 0; i < size ; i++) {
        arr[i] = (i + 1) * 10;
    }
}


void show(const int arr[], int size) {
    printf("\nThe array[%d] = {\n",size);
    for (int i = 0; i < size ; i++) {
        printf("%d", arr[i]);
        printf(",");
    }
    printf("}\n");
}




int main(){

/*


// type arrayName[arraySize];
int name[5];


// Partial initialization (remaining elements set to 0)
int partial[5] = {10, 20}; // {10, 20, 0, 0, 0}


//Implicit sizing (compiler counts the elements)
int autoSize[] = {1, 2, 3}; // Size is 3

*/

// Full initialization
int numbers[100] = {10, 20, 30, 40, 50};

int size = sizeof(numbers) / sizeof(numbers[0]);

printf("Size of the array is %d\n",size);


int first_element_of_array = numbers[0]; 
printf("first_element_of_array is %d\n",first_element_of_array);

// numbers[2] = 99;   // Modify "third" element to 99
full(numbers,size);
show(numbers,size);

return 0;
}
