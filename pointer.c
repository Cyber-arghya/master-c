
# include <stdio.h>

int main() {

int age    =  24;
int *ptr   = &age; // ptr is a pointer value that // *value at address //
int **pptr = &ptr; // pptr is a pointer to pointer  value

//address
printf("\n-------------------------------------------------------------------------------------------\n");

printf("Address of         [ &age ]--------------p = %p\n", &age); 
printf("value of           [ age ]---------------d = %d\n", age ); 

printf("\n---------------    pointer  int *   ---------------------------------------------------\n\n");

printf("Address inside  pointer [ ptr ]----------p = %p\n", ptr );  // ptr stores the address of age   
printf("ptr own address         [ &ptr ]---------p = %p\n", &ptr);  // ptr own address 
printf("age value using pointer [ *ptr ]---------d = %d\n", *ptr);
printf("age value using pointer [ *(&age) ]------d = %d\n", *(&age));

printf("\n---------------   pointer to pointer int **   -------------------------------------------\n\n");

printf("Address inside  pointer [ pptr ] --------p = %p\n", pptr ); // pptr stores the address of ptr   
printf("pptr own address        [ &pptr ]--------p = %p\n", &pptr); 
printf("age value using pointer to pointer [ **pptr ]---------d = %d\n", **pptr);// To see the data, you "hop" twice with **pptr.        

printf("\n");


int var;   // variable declar ;
int *address; // pointer variable declar ;

address = &var ; // Address  of [ variable ] assign inside [ address ] ;
*address = 2026 ; // assign a value inside  [ variable ] using pointer  ;

printf("----------    Value  Manipulation using pointer    ---------------------------------------\n\n");
printf("Initial var                                    = %d\n", var); 
printf("var value print using pointer [ *address ]     = %d\n", *address);
printf("\n");

(*address)++;

printf("----------------------   (*address)++;  //  increment   -----\n\n");
printf("After (*address)++ ; var                       = %d\n", var); 
printf("var value print  using pointer [ *address ]    = %d\n", *address);
printf("\n");

*address+=3;

printf("----------------------    *address+=3;  // var + 3      -----\n\n");
printf("After *address += 3 ; var                      = %d\n", var);
printf("var value print using pointer [ (*address)-- ] = %d\n", (*address)--);
printf("var value print using pointer [ *address ]     = %d\n", *address);
printf("\n-----------------------------------------------------------------------------------------\n");

return 0;
}