/*
* exercise1.c
* Create an array of 100 items, with random interger values.
* Max 100 item array
* find max integer
* find min integer
* find the sum of all integers
* Compile: 
* gcc -std=gnu99 ./4Functions/exercise1.c -o ./4Functions/exercise1.out
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ARRAY 100

//declare array
int  myArray[100];
int myMax;

//create max function
int max (int first, int second) {
    int max;
   //some comparisons 
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


//create min function

int sum(int localArray[])
{
    int mySum;
    for (int ii = 0; ii < 100; ii++)
    {
     mySum = mySum + localArray[ii];   
    }
    return mySum;
}

int main() {
    int mySum;
    //init random
    srand(time(NULL));

    //All the work goes here
    for (int ii = 0; ii < 100 ; ii++) 
    {
        //assign values
        myArray[ii] = (rand() % 100) + 1;
        
    }
    printf("Completed initializing array\n");
    
    //search for maximum value
    for (int ii = 0; ii < 100; ii++)
    {
        
     myMax  = max(myArray[ii],myMax );
    }
    printf("This is the max: %d", myMax);    
    for (int ii = 0; ii < 100; ii++)
    {
        mySum = mySum + myArray[ii];
    }
    printf("The sum is: %d", mySum);
    printf("new sum %d", sum(&myArray));
    
    
 return 0;   
}