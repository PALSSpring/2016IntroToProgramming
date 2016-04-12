#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int loop_num = 0;

int max(int left, int right)
{
    if (left > right)
     {
         return left;
     } 
     else 
     {
         return right;
     }
}

void setup() {
    //your setup code
    cout << "Completed Setup " << endl;
    for (int ii= 0; ii < 30; ii++)
    {
      cout << max(ii, 20) << endl;
    }
} 

void loop() {
    //your looping code
    cout << "Completed loop: " <<   loop_num++ <<  endl;\
    
   
}

int main ()
{
    setup();
    while(true)
    {
      loop();
      sleep(10);
    }
}