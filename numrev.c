#include <stdio.h>

void reverse(int n) {
    
    if (n == 0) {
        return;
    }

    printf("%d", n % 10);

    reverse(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);


    printf("Reversed number: ");
    if (num == 0) {
        printf("0");
    } else {
        reverse(num);
        printf("Reversed done ");
    }
    printf("\n");
    
    return 0;
}