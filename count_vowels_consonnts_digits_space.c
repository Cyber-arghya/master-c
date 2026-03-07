#include <stdio.h>
int main()
{
    int vowels = 0, consonats = 0, digits = 0, space = 0;
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 48 && ch <= 57)
        {
            digits++;
        }
        else if (ch == ' ')
        {
            space++;
        }
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonats++;
            }
        }
    }
    printf("Vowels ---> %d \n Consonants ---> %d \n Digits ---> %d \n Space ---> %d \n", vowels, consonats, digits, space);
    return 0;
}