/*
* max.c
* Create a function that determines the max value.
* Compile: 
* gcc -std=gnu99 ./4Functions/max.c -o ./4Functions/max.out
* Run ./4Functions/max.out
*/
#include <stdio.h>
#include <time.h>

//create max function 
//Assumption is all values are positive
//unsigned ints
int max(unsigned int first, unsigned int second) {
    int max = -1;
   if (first > second) 
   {
       max = first;
   }
   else 
   {
       max = second;
   }
 return max;   
}

int main() {
    //All the work goes here
    unsigned int aa = 8;
    unsigned int bb = 10;
    printf("max = %d\n", max(aa, bb));
   // printf("Time(NULL): %d, time(&tm) %d\n", time(NULL), time(&tm));
 return 0;   
}
