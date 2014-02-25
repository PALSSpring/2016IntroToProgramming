/*
* HelloWorld.c
* Compile:
* gcc HelloWorld.c -o HelloWorld.out
*/

#include <stdio.h>
/* Global values appear before main. */

int foo; //foo is a global value

int main() {
    foo = 6; //assignments use the "=" to take the value on the right and assign it the variable on the left.
    printf("Hello World %d",foo); //print formated text with "printf"
    return 0; //return program completed properly.
}
