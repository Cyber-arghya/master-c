#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int flag = 1;

    printf("Enter a string (only letters, no spaces): ");
    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}