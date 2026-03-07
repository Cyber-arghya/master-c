#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num;

    scanf("%d", &num);

    int result = sumDigits(num);

    printf("Sum of digits = %d\n", result);

    return 0;
}