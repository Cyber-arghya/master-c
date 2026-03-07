#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    int freq[256] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagrams\n");
        return 0;
    }


    for(int i = 0; s1[i] != '\0'; i++) {
        freq[s1[i]]++;
    }


    for(int i = 0; s2[i] != '\0'; i++) {
        freq[s2[i]]--;
    }


    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}