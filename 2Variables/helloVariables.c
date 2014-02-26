/*
* Hello Variables: Creating, Setting, Using variables
* Compile: 
* gcc -std=gnu99 helloVariables.c -o helloVariables.out
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
       -127, 
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
    int fooInt;
    short fooShort;
    long  fooLong;
    unsigned int  fooUint;

    //###Floating Point:
    float barFloat;
    double barDouble;

    //###Boolean: Logica Operators
    bool barBool;

    //###Characters: single characters
    char barChar;
    
    //setting global variables
    foo = 32,000;
    bar = 2,147,483,647;
    
    
    printf("foo = %d\n",foo);
    printf("size in bytes of foo = %d\n", sizeof(foo));
    printf("size int bytes of int: %d\n", sizeof(int));
    
    /* Declare a variables of each type.
       Print them, and print their size.
       Find the maximum and minum number each type can represent.
       What happens when you use char type?
    */
    
    
    return 0;
}

