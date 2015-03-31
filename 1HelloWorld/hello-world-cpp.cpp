/*
* Hellow World Story. Modified from http://www.cplusplus.com/
* g++ hello-world-cpp.cpp -o hellocpp.out
* ./hellocpp.out
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << "."\n;
  cout << "What is your favorite book? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  cout << "What is your favorite planet? ";
  getline (cin, mystr);
  cout << "That planet is awesome!  " << mystr << " too!\n";
  return 0;
}