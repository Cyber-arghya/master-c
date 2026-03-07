#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int count;
    
    scanf("%d", &count);
    printf("Fibonacci: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}