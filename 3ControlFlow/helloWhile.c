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
    foo = 0;
    printf("In main foo = %d\n",foo);
    printf("bar = %d\n",bar);

    
    while (foo < 100) {
        printf("Loop: %d\n", foo++ );
        sleep(1);
    }
    
    //Create loop that count to 100
    
    //Create loop that counts down to 0;
    
    //Create loop that counts up by two
    
    //Create loop that counts down by two
    
    //Create loop that starts at 15 and ends at -15
    
    //Create loop that stop when foo = -15
    
    //Create two loops: loop ii, and loop jj. Each start at 0 and end at 10. New line at the end of each jj.
    
    //Create two loops: loop ii starts at 100 and ends at 0. Loop jj starts at 0 and ends at 100. New line at the end of each jj.
  return 0;  
}
