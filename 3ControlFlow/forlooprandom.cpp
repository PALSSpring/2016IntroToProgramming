#include <iostream>

//needed for rand, srand
#include <stdlib.h>

using namespace std;


int main() {
    srand(time(NULL));
    for (int ii = 0 ; ii < 10 ; ii++)
    {
        cout << "rand: " << rand() % 100   << endl;
    }
    
}