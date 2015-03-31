#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int start_num = 23;
float real_num = 23.3333;
int num1;
int num2;


bool bigger(int num1, int num2) {
    
    if (num1 > num2) 
    {
        return true;
    }
   return false;
}

int main() {

    
    cout << "addition: " << 1 + 1 << endl; 
    cout << "div 3/4: " << (float) 3/4 << endl;
    cout << "div 24 / 5 " << (float) 24/5 << endl;
    cout << "div 4/2 " << (float) 4/2 << endl;
    cout << "square: " << pow(42,2) << endl;
    cout << "sqaure root" << sqrt(start_num);
    
    cout << "get num1: ";
    cin  >> num1;
    cout << "get num2";
    cin >> num2;
    if (bigger(num1, num2))
    {
        cout << "Num1 is great than Num2" << endl;
        
    } else 
    {
        cout << "Num2 is greater than Num 1" << endl;
    }
    
    /*
    for (int nn = 0; nn <= 1; nn++)
    {
        cout << "NN: " << nn << endl;
        cout << (float)10/nn << endl;
    }
    */
    
    return 0;
}
