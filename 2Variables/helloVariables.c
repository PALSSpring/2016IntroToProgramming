/*
* Hello Variables: Creating, Setting, Using variables
* Change directory:
* cd 2Variables 
* Compile: 
* gcc -std=gnu99 ./2Variables/helloVariables.c -o ./2Variables/helloVariables.out
* RUN:
* ./2Variables/helloVariables.out
*/
#include <stdio.h>
#include <unistd.h>

/* Global variable prior to main */

int foo;
int bar;

/* The default function */
int main() 
{
    /* Declare and inititialize variables at top of function */
    /* Assign values: 
       -127 
        0 
        128
        255
       -32,768  
       32,767
       65,535
       2,147,483,647 
       -2,147,483,648
       4,294,967,295
    */
    
    //create and initialize local variables
    int fooInt = 32000;
    short fooShort = 65000;
    long  fooLong;
    unsigned int  fooUint;

    //###Floating Point:
    float barFloat;
    double barDouble;

    //###Boolean: Logica Operators
    _Bool barBool;

    //###Characters: single characters
    char barChar;
    
    //setting global variables
    foo = 757657676;
    bar = 999 / 5 ;
    
    
    printf("foo = %d\n",foo);
    printf("size in bytes of foo = %d\n", sizeof(foo));
    printf("size int bytes of int: %d\n", sizeof(int));
    
    /* Declare a variables of each type.
       Print them, and print their size.
       Find the maximum and minum number each type can represent.
       What happens when you use char type?
    */
    
    printf("bar = %d\n",bar);
    printf("size in bytes of bar = %d\n", sizeof(bar));
    printf("size int bytes of integer: %d\n", sizeof(int));

    fooShort = 65000;
    printf("fooShort = %d\n",bar);
    printf("size in bytes of fooShort = %d\n", sizeof(fooShort));
    printf("size int bytes of short: %d\n", sizeof(short));
    
    
    /* multiple values on one line */
    printf("bar %d, foo %d\n", bar, foo);

    
    return 0;
}

