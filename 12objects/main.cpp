/*
* Use a shape library of rectanles
*
*/
#include <iostream>
#include <string>
#include <math.h>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle;
    rectangle.set_values(10,20);
    cout << "size of rectangle: " << rectangle.width << endl; 
    
    return 0;
}