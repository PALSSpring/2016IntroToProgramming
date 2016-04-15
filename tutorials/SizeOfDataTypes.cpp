/*
* The Size of Data Types
*  Size of integral types here: http://www.cplusplus.com/reference/climits/
*/
#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;

int main() 
{
    unsigned int aa;
    aa = 10;

    cout << "sizeof(aa): " << sizeof(aa) << endl;
    aa = pow(2,16);
    cout << "val aa: " << aa << endl;
    cout << "val aa + 1:" << aa + 1 << endl;
    aa = pow(2,31);
    cout << "val aa: " << aa << endl;
    cout << "val aa + 1:" << aa + 1 << endl;
    aa = pow(2,32) - 1; //2^32 is bigger than the value we're looking for.
    cout << "val aa: " << aa << endl;
    cout << "val aa + 1:" << aa + 1 << endl;
    aa = pow(2,33)/8; //Fixed overflow by dividing
    cout << "val aa: " << aa << endl;
    cout << "val aa + 1:" << aa + 1 << endl;

    
    cout << "max int:" << INT_MAX << endl;
    cout << "max unsigned int:" << UINT_MAX << endl;

    
}