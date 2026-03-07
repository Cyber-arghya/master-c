#include <stdio.h>
void reverse_num(int n) {
 if (n == 0) { return; }
 printf("%d", n % 10); 
 reverse_num(n / 10); 
}
int main() {
 int n;

 scanf("%d", &n);
 printf("Reversed %d: ", n);
 reverse_num(n);
 printf("\n");
 return 0;
}