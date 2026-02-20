
# include <stdio.h>

int main() {

int age    =  22;
int *ptr   = &age; // ptr is a pointer variable that *store adress 
int **pptr = &ptr; // pptr is a pointer to pointer  variable

//address
printf("------------------------------------------------------------\n");
printf("Adress of age [ &age ]-------------p = %p\n", &age); 
printf("Value  of age [ age ]--------------d = %d\n", age ); 
printf("------------------------------------------------------------\n"); 
printf("Adress inside [ ptr ] -------------p = %p\n", ptr );  // ptr stores the address of age   
printf("Address of [ptr] (&ptr)------------p = %p\n", &ptr);  // ptr own adress 
printf("Value at adress [ *ptr ]-----------d = %d\n", *ptr);
printf("Value at adress [ *(&age) ]--------d = %d\n", *(&age));
printf("------------------------------------------------------------\n");
printf("Adress inside [ pptr ] ------------p = %p\n", pptr ); // pptr stores the address of ptr   
printf("Address of [pptr] (&pptr)----------p = %p\n", &pptr); // pptr own adress
printf("Value at adress [ **pptr ]---------d = %d\n", **pptr);// To see the data, you "hop" twice with **pptr.        
printf("------------------------------------------------------------\n");
return 0;
}