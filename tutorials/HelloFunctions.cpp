/*
* Hello Function
*
*/

#include <iostream>
#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
#include <unistd.h>

using namespace std;

//variable as an output
int aa;

int sum (int num1, int num2) 
{
  int temp = num1 + num2;
  return temp;
}

int max (int num1, int num2)
{
    if (num1 > num2) 
    {
        return num1;
    } else
    {
    return num2;
    }
}


int main() {
    
    srand(time(NULL));
    int foo = rand() % 100;   
    int bar = rand() % 100;
    for (int ii = 0; ii < 10 ; ii++ )
    {
        cout << "Time: " << time(NULL) << endl;
        foo = rand() % 100;   
        bar = rand() % 100;
        cout << "foo: " << foo << endl;
        cout << "bar: " << bar << endl;
        cout << "MAX: " << max(foo, bar) << endl;

    }
   // aa = 10;
   int num1 = 11;
   int num2 = 11;
   //cout << "num1: " << num1 << endl;
   //cout << "num2: " << num2 << endl;
   //cout << "MAX: " << max(num1, num2) << endl;

    
    //cout << aa << endl;
    return 0;
}