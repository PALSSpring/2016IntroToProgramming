/*
*
* Write five lines to a file.
*
*
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
    int linenum = 0; //line written
    string line; //variable to store line read from file
    //declare file stream object
    line = "--HelloWorld--";
    ofstream outfile("helloworld.txt");
    if (outfile.is_open()) {
        while (linenum < 5) {
            outfile <<  line <<  " : " << linenum << endl;
            linenum++;
        }
    outfile.close();
    } else {
        cout << "error file not found" << endl;
    }
    return 0;
}