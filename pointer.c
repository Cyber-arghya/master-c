
# include <stdio.h>

int main() {

int age    =  22;
int *ptr   = &age; // ptr is a pointer variable that // *value at address //
int **pptr = &ptr; // pptr is a pointer to pointer  variable

//address
printf("\n\n------------------------    pointer    ---------------------\n\n");
printf("Address of age [ &age ]-------------p = %p\n", &age); 
printf("Value  of age [ age ]--------------d = %d\n", age ); 
printf("\n"); 
printf("Address inside [ ptr ] -------------p = %p\n", ptr );  // ptr stores the address of age   
printf("Address of [ptr] (&ptr)------------p = %p\n", &ptr);  // ptr own adress 
printf("Value at adress [ *ptr ]-----------d = %d\n", *ptr);
printf("Value at adress [ *(&age) ]--------d = %d\n", *(&age));
printf("\n");
printf("Address inside [ pptr ] ------------p = %p\n", pptr ); // pptr stores the address of ptr   
printf("Address of [pptr] (&pptr)----------p = %p\n", &pptr); // pptr own adress
printf("Value at adress [ **pptr ]---------d = %d\n", **pptr);// To see the data, you "hop" twice with **pptr.        
printf("\n");


int value;   // variable declar ;
int *address; // pointer variable declar ;

address = &value ; // address of value ;
*address = 2026 ; // assign value at address ;

printf("-----    variable value Manipulation using pointer    ------\n\n");
printf("value = %d\n", value); 
printf("value at *address = %d\n", *address);
printf("\n");

(*address)++;

printf("---------------------    (*address)++;    ------------------\n\n");
printf("value = %d\n", value); 
printf("value at *address = %d\n", *address);
printf("\n");

*address+=3;

printf("----------------------    *address+=3;     -----------------\n\n");
printf("value = %d\n", value); 
printf("value at *adress = %d\n", *address);
printf("\n------------------------------------------------------------\n");

return 0;
}