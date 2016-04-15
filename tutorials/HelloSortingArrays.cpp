/*
* Hello Sorting Arrays
* Start with Hello Random
*/
#include <iostream>
using namespace std;

int max(int num1, int num2) {
    if(num1 > num2)
    {
        return num1;
    } else 
    {
        return num2;
    }
}

int main() {
    
    srand(time(NULL));
    int foo;// = rand() % 100;   
    int bar;// = rand() % 100 + 10;
    
    for (int ii = 0; ii < 10 ; ii++ )
    {
        cout << "Time: " << time(NULL) << endl;
        foo = rand() % 100;   
        bar = rand() % 100 + 10;
        cout << "foo: " << foo << endl;
        cout << "bar: " << bar << endl;
        cout << "MAX: " << max(foo, bar) << endl;

    }
}