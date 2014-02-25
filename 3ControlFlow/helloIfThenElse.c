/*
* HelloWhileLoop
* Compile: 
* gcc -std=gnu99 helloWhile.c -o helloWhile.out
*/
#include <stdio.h>
#include <unistd.h>



int foo;

int main() {
    int bar = 100;
    int foo = 0;
    printf("In main foo = %d\n",foo);
    printf("bar = %d\n",bar);

    if (bar > foo) 
    {
        printf("bar %d is greater than foo %d", bar, foo);
    }
    else
    {
        printf("bar %d is not greater than foo %d", bar, foo);
    }
    
    //Change bar to be 50, and foo to be 
    return 0;
}
