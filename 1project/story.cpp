/*
* Hellow World Story. Modified from http://www.cplusplus.com/
* g++ story.cpp -o story.out
* ./story.out
*/

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main ()
{
  int sentenceNumber;
  
  string story;
  string sent1; //sent1 stands for sentence1
  string sent2;
  string sent3;
  string sent4;
  string sent5;
  string sent6;
  string sent7;
  string sent8;
  string sent9;

  string answer;

  string mystr;
  string animal = "monkey";
  string instrument = "guitar";
  
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What's your favorite animal? (" << animal <<") ";
  getline (cin, animal);
  if (animal == "")
  {
    animal = "monkey";
  }
  
  while (1) {
  cout << "Do you like " << animal <<"?(yes/no)";
  getline (cin, answer);
  if ( answer == "yes")
  {
    cout << "You like: " << animal << endl;
    break;
  }
  if (answer == "no") 
  {
    cout << "You do not like: " << animal << endl;
    break;
  }
  }
  cout << "What's your favorite instrument? ";
  getline (cin, instrument);
  
  sent1 = "#this is the story: \n";
  
  sent2 =  "Once upon a time there was a **short** ";
  sent2.append( animal);
  sent2.append( " who liked to play the ");
  sent2.append( instrument); 
  
  

  sent3 = " and solve equations while *solving* an equation he died."; 
  sent4 = "a couple of scientist decided to clone the monkey so they cloned his genes. \
          still dead because he was burned to ashes .";
  sent5 = "all this was fake every thing was no more than a nightmare."; 
  sent6 =  "When he woke up he discovered that he was surrounded with dead monkeys in a zoo"; 
  sent7 =  "his friend the camel came to help him to escape.";
          
  sent8 =  "After he escaped Nasa caught him"; 
  sent9 =  "and sent him to the space as the fifth monkey \
          astronaut he died because of a parachute failure.\n" ;
 
 int sentUsed[9];
 for (int nn = 0; nn < 9; nn++)
 {
   sentUsed[nn]=0;
 }
 
 for (int nn = 0; nn < 9; nn = nn + 1)
 {
   
    sentenceNumber = rand() % 9 + 1;
    sentUsed[sentenceNumber] = 1;
    
    cout << "sentence is: " << sentenceNumber << endl;
    if (sentenceNumber == 0 && sentUsed[nn] == 0) {
      cout << "Nothing; 0"; 
    }
    if (sentenceNumber == 1 && sentUsed[nn] == 0) {
      cout << sent1; 
    }
    if (sentenceNumber == 2 && sentUsed[nn] == 0) {
      cout << sent2; 
    }
      if (sentenceNumber == 3 && sentUsed[nn] == 0) {
      cout << sent3; 
    }
      if (sentenceNumber == 4 && sentUsed[nn] == 0) {
      cout << sent4; 
    }
      if (sentenceNumber == 5 && sentUsed[nn] == 0) {
      cout << sent5; 
    }
      if (sentenceNumber == 6 && sentUsed[nn] == 0) {
      cout << sent6; 
    }
     if (sentenceNumber == 7 && sentUsed[nn] == 0) {
      cout << sent7; 
    }
     if (sentenceNumber == 8 && sentUsed[nn] == 0) {
      cout << sent8; 
    }
     if (sentenceNumber == 9 && sentUsed[nn] == 0) {
      cout << sent9; 
    }
    cout << endl;

 }
 
 
 /*
 
 cout << sent1;
 cout << sent2;
 cout << sent3 << sent4 << sent5;
 cout << sent6;
 cout << sent7;
 cout << sent8;
 cout << sent9 << endl;


*/
 
  return 0;
}