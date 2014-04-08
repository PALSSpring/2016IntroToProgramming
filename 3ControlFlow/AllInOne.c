/*
*AllInOne: Creating, Setting, Using variables, for, while, and if, then, else
* Change directory:
* cd 3ControlFlow
* Compile: 
* gcc -std=gnu99 AllInOne.c -o AllInOne.out
* RUN:
* ./helloVariable.out
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Global variable prior to main */

int foo;
int bar;



/* The default function */
int main() 
{
    srand(time(NULL));
    foo = rand();   
    bar = rand();
    
    /*
    *
    * Challenge: 
    * Print message when bar is greater than foo, equal to foo, and less than foo
    */
    for (int ii = 0; ii < 100; ii++)
    {
        printf("foo: %d; bar: %d; \n", foo);
    }
    
    /*
    * Limit random numbers between 0 and 10
    * Challenge:
    * Print message when bar is greater than foo, equal to foo, and less than foo.
    * Count how many times the same number is chosen.
    * What is the max number chosen?
    * What is the min number chosen?
    * What is the average value of all the numbers selected?
    * How many times out of ii times was number selected, how likely was a number picked?
    */
    for (int ii = 0; ii < 10; ii++)
    {
        printf("foo: %d; bar: %d; \n", foo);
    }
    
    return 0;
}

