// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1001];
//      fgets(s, sizeof(s),stdin);
//      int len =strlen(s);
//      for(int i=0;i<len/2;i++){
//         char tmp=s[i];
//         s[i]=s[len-1-i];
//         s[len-1-i]=tmp;
//      }
//      char ans[1001];
//      for(int i=0;i<len;i++){
//         char word[1001];
//         while(i<len &&s[i]!=' '){
//             word+=s[i];
//             i++;
//         }
//         int l2=strlen(word);
//          for(int j=0;j<l2/2;j++){
//         char tmp2=word[j];
//         word[j]=word[l2-1-i];
//         word[l2-1-i]=tmp2;
//      }
//      if(l2>0){
//         ans+=" "+word;
//      }
//      }
//     return 0;
// }
#include <stdio.h>

int main() {
    char s[1000], t;
    int i = 0, j, k, len = 0, start, end;

    scanf("%[^\n]", s);

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