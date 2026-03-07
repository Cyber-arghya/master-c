#include <stdio.h>

int main() {
    char s[1000], t;
    int i = 0, j, len = 0, start, end;

    fgets(s, 1000, stdin);

    while (s[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;
    while (i < j) {

        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }

    start = 0;
    for (i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            end = i - 1;
            while (start < end) {
                t = s[start];
                s[start] = s[end];
                s[end] = t;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("%s", s);

    return 0;
}