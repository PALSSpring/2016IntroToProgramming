/*
*
* Read from file and print each line.
*
*
*
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
    int linenum = 0; //line number 
    string line; //variable to store line read from file
    //declare file stream object
    ifstream infile("helloworld.txt");
    if (infile.is_open()) {
        while (getline(infile, line)) {
            cout << linenum << ": " << line << endl;
            linenum++;
        }
        infile.close();
    } else {
        cout << "error file not found" << endl;
    }
    return 0;
}