/*
* timetest.c
* Create a function that determines the max value.
* Compile: 
* gcc -std=gnu99 ./4Functions/timetest.c -o ./4Functions/timetest.out
* Run  ./4Functions/timetest.out 
*/
#include <stdio.h>
#include <time.h>


int main() {
    time_t tm;
    //Time returns a time value or will store it in a pointer.
    printf("Time(NULL): %d, time(&tm) %d\n", time(NULL), time(&tm));
    
 return 0;   
}
