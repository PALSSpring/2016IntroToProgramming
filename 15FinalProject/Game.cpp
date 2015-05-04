#include <iostream>
#include <string>
#include <vector>
#include "Character.h"
#include "Arena.h"


using namespace std;

string gameName = "MetalRisk";
string gameDesc = "Awesome: Conflict Now. Come one, come all. Choose your arena. Pick your character. Determine your destiny.";
string myCharacter;

Character[] setup(Character characters[] ) {
  //configure the characters
   plainCharacter bob;
    bob.name = "Bob";
    characters[0] = 

    plainCharacter bill;
    bill.name = "Bill";
  //add character to play list
   
    
    return 0;
}
int gameLoop()
{
    return -1;
}
int endGame() {
    return -1;
}

//who goes first
int initiative(Character playerOne, Character playerTwo)
{
    return -1;
}

int resolve(Character playerOne, Character playerTwo)
{
    return -1;
}


int main () {
    /*
      Create the characters for the game

    */
  
    setup();
  
    cout << gameName << endl;
    cout << gameDesc << endl;
    // show characters
    //Would like to see all the characters
    //Random character?
    cout << "Pick your player: ";

    cin >> myCharacter;
    //choose your openent or random opponent
    cout << "Choose an arena: " << endl;
    // list all the arenas
    //rand arena
    //state who's home arena
    cout << "3... 2... 1... Fight" << endl;
    //choose weapon
    //choose attack
    //choose a guard or defend action
    cout << "Combat is occuring" << endl;
    findWinner (bob, bill);
    //combat resolution
    //action description: what attack, what defense
    //What happend
    cout << "show stats";

    //repeat until someone wins by someone losing.
    //second player random



    //Who goes first? Inititiave, random?

    //Weapon speed? Who does it affect combat?

    //Finally there is a winner and a looser

    cout << "You Win! || You lose!" << endl;
    //create list of ways to say you lose and win

    //option to restart or quit

}
