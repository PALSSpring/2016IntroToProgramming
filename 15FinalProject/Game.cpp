#include <iostream>
#include <string>
#include <vector>
#include "Character.h"
#include "plainCharacter.h"
#include "Arena.h"
#include "plainCharacter.h"
#include "Zaincules.h"
#include "AhmedalaliCharacter.h"
#include "babtainCharacter.h"
#include "RahafCharacter.h" 
#include "EterCharacter.h"
#include "MohammedCharacter.h"
#include "FaisalCharacter.h"
#include "AbdulrahmanCharacter.h"
#include "AbdulmalekCharacter.h"
//needed for rand, srand
#include <stdlib.h>

using namespace std;

string gameName = "Mystery Metal Risk";
string gameDesc = "Awesome: Conflict Now. Come one, come all.  Pick your character. Choose your arena. Determine your destiny.";
string myCharacter;
string myArena;
string player2;
int p1num;
int p2num;
int arenaNum;
int chanceSuccess = 75;

string quitStatus;

vector<Character*> Characters;
vector<Arena> Arenas;


int setup() {
    //this is all a bit messed up. 
    //the vector of characters needs to be a vector of ptr's that way they can all hold the different character types. 
    
    
    //configure the characters
    plainCharacter* dayRobot = new plainCharacter();
    dayRobot->name = "dayRobot";
    Characters.push_back(dayRobot);
    
    
    Zaincules* zaincules = new Zaincules();
    zaincules->name = "Zaincules";
    Characters.push_back(zaincules);
    
    RahafCharacter* Einstein = new RahafCharacter(); 
    Einstein->name = "Einstein";
    Characters.push_back(Einstein);
    
    AbdulmalekCharacter* Pi = new AbdulmalekCharacter(); 
    Pi->name = "Pi";
    Characters.push_back(Pi);
    
    EterCharacter* Blake = new EterCharacter();
    Blake->name = "Blake Lancaster";
    Characters.push_back(Blake);
    
    
    AbdulrahmanCharacter* Itachi = new AbdulrahmanCharacter();
    Itachi->name = "Itachi";
    Characters.push_back(Itachi);
   //add characters here  ninjaCharacter* ninjaAlice = new ninjaChracter();
    
    AhmedalaliCharacter* DevilJin = new AhmedalaliCharacter();
    DevilJin->name = "Devil Jin";
    Characters.push_back(DevilJin); 
    
    babtainCharacter* TwoHeadedCamel = new babtainCharacter();
    TwoHeadedCamel->name = "Two Headed Camel";
    Characters.push_back(TwoHeadedCamel);
    
    MohammedCharacter* TheWolf = new MohammedCharacter();
    TheWolf->name = "The Wolf";
    Characters.push_back(TheWolf); 
    
    FaisalCharacter* BlackShark = new FaisalCharacter();
    BlackShark->name = "BlackShark";
    Characters.push_back(BlackShark);

    
    
    //add character to play list
    Arena nightArena;
    nightArena.name="Night's Arena";
    nightArena.desc="Night's Arena";
    nightArena.homeCharacterName="nightRobot";
    Arenas.push_back(nightArena);

    Arena yard;
    yard.name="Night's Arena";
    yard.desc="Night's Arena";
    yard.homeCharacterName="nightRobot";
    Arenas.push_back(yard);

    Arena dayArena;
    dayArena.name="Day's Arena";
    Arenas.push_back(dayArena);
    
    Arena BambooJungle;
    BambooJungle.name="BambooJungle's Arena";
    BambooJungle.desc = "";
    BambooJungle.homeCharacterName ="Itachi";
    Arenas.push_back(BambooJungle);
    
    Arena BlackFalcon;
    BlackFalcon.name="Black Falcon";
    BlackFalcon.desc = "Abondened landmark.";
    BlackFalcon.homeCharacterName ="Blake Lancaster";
    Arenas.push_back(BlackFalcon);
    
    Arena Lab;
    Lab.name="Einstein’s Lab";
    Lab.desc="Lasers, reflective mirrors, toxic gas, your worst nightmare has yet to come.";
    Lab.homeCharacterName ="Einstein";
    Arenas.push_back(Lab);
    
    Arena DeathDesert;
    DeathDesert.name="DeathDesert's Arena";
    DeathDesert.desc = "Camels, Sand, Saudis and oil";
    DeathDesert.homeCharacterName ="zaincules";
    Arenas.push_back(DeathDesert);
    
    Arena Unknown;
    Unknown.name="Unknown";
    Unknown.desc="Mysterious dark place";
    Unknown.homeCharacterName ="Pi";
    Arenas.push_back(Unknown);
    
    Arena Forest;
    Forest.name="Forest";
    Forest.desc="High trees and a long river";
    Forest.homeCharacterName ="TheWolf";
    Arenas.push_back(Forest);
    
     Arena hell;
    hell.name="Einstein’s Lab";
    Lab.desc="Lasers, reflective mirrors, toxic gas, your worst nightmare has yet to come.";
    Lab.homeCharacterName ="Einstein";
    Arenas.push_back(Lab);
    
    Arena Sea;
    Sea.name="Sea"
    Sea.desc="The deep, wide sea"
    Sea.homecharacterName ="BlackShark"
    Arenas.push_back

    return 0;
}
/*  Notes for GameLoop
      //choose weapon
        //choose attack
        //choose a guard or defend actio
       // cout << "Combat is occuring" << endl;
        //   findWinner (bob, bill);
        //combat resolution
        //action description: what attack, what defense
        //What happend
        //cout << "show stats";

        //repeat until someone wins by someone losing.
        //second player random

        //Who goes first? Inititiave, random?

        //Weapon speed? Who does it affect combat?

        //Finally there is a winner and a looser
*/
int gameLoop(Character* charA, Character* charB)
{
   // srand(time(NULL));
    // Needs to be given characters
    Character* fastChar;
    Character* slowChar;
    int roll;

    
    while(1) {
        cout << "Declare your action: ";

        //initiative: who goes first
        //slowChar/fastChar not referencing properly
        if(charA->speed > charB->speed) {
            fastChar = charA;
            slowChar = charB;
        } else if(charA->speed < charB->speed) {
            fastChar = charB;
            slowChar = charA;
        } else {
            if(rand() % 2 ) {
                fastChar = charA;
                slowChar = charB;
            } else {
                fastChar = charB;
                slowChar = charA;
            }
        }
        //declare action phase: fastChar goes first
        roll = rand() % 100;
        cout << charA->name <<" Roll: " << roll << "\nchanceSucess: " << chanceSuccess << endl;
        if( roll < chanceSuccess) {
            cout << "success fff: " <<  charA->name ;
            int damage = charA->attack("normal");
            cout << " damage: " << damage << endl;
            cout << charB->takeDamage(damage);
            charB->health = charB->health - 10;
            cout << "charB health: " << charB->health << endl;
            if (charB->health < 0) {
                cout << charB->loseMessage() << endl;
                return 0;
            }
        }
        /*
        roll = rand() % 100 ;
        cout << slowChar.name <<" Roll: " << roll << "chanceSucess: " << chanceSuccess << endl;

        if( roll < chanceSuccess) {
            cout << "success slow" << endl;
            int damage = slowChar.attack("normal");
            fastChar.takeDamage(damage);
            if (fastChar.health < 0) {
                cout << fastChar.loseMessage() << endl;
                return 1;
            }
        }*/
    }
    
}

int endGame() {
    return -1;
}

int showArenas() {
    cout << "Arenas: " <<  endl;

    for(vector<Arena>::const_iterator ii = Arenas.begin(); ii != Arenas.end(); ii++)
    {
        cout << "(" << ii - Arenas.begin() <<") Arena: " << (*ii).name << endl;
    }
    return 0;
}



int showCharacters() {
    cout << "Characters: " <<  endl;

    for(vector<Character*>::const_iterator ii=Characters.begin(); ii != Characters.end(); ii++)
    {
        cout << "(" << ii - Characters.begin() <<") Character: " << (*ii)->name << endl;
    }
    return 0;
}



int main () {
    /*
      Create the characters for the game

    */
    srand(time(NULL));
    setup();
    //The play loop
    while(1) {
        cout << gameName << endl;
        cout << gameDesc << endl;
        // show characters
        showCharacters();
        while (1) {
            cout << "Pick your character: [0 - " << Characters.size() << "], r=random, {0}] ";
            cin >> myCharacter;
            cout << myCharacter;
            //random character condition
            if (myCharacter == "r") {
                p1num = rand() % Characters.size() == 0;
                cout << "Random character is:"  << Characters.at(p1num)->name << endl;
                break;
            }
            if (myCharacter == "") {
                myCharacter = "0";
            }
            //chose character condition
            //if ( p1num = stoi(myCharacter)) {
            p1num = atoi( myCharacter.c_str() );
            if (( p1num >= 0 )||(p1num < Characters.size()) ) {
                cout << "Chosen character is:"  << Characters.at(p1num)->name << endl;
                break;
            }
            cout << "Please enter valid option: 0,1,2,3...or r for random." << endl;
        }
        // random p2 opponent
        //p2num = rand() % Characters.size();
        //cout << "Your opponent is:"  << Characters.at(p2num)->name << endl;
        //cout << "attack test:"  << Characters.at(p2num)->attack("test") << endl;
        showCharacters();
        while (1) {
            cout << "Pick your opponent: [0 - " << Characters.size() << "], r=random, {0}] ";
            cin >> myCharacter;
            cout << myCharacter;
            //random character condition
            if (myCharacter == "r") {
                p2num = rand() % Characters.size() == 0;
                cout << "Random character is:"  << Characters.at(p2num)->name << endl;
                break;
            }
            if (myCharacter == "") {
                myCharacter = "0";
            }
            //chose character condition
            //if ( p1num = stoi(myCharacter)) {
            p2num = atoi( myCharacter.c_str() );
            if (( p2num >= 0 )||(p2num < Characters.size()) ) {
                cout << "Chosen character is:"  << Characters.at(p2num)->name << endl;
                break;
            }
            cout << "Please enter valid option: 0,1,2,3...or r for random." << endl;
        }

        // list all the arenas
        showArenas();
        while (1)
        {
            //rand arena
            //state who's home arena
            cout << "Choose an arena: [0 - " << Arenas.size() << "], r=random, {0}] ";
            cin >> myArena;
            cout << myArena;

            if (myArena == "") {
                myArena = "r";
            }

            if (myArena == "r") {
                arenaNum = rand() % Arenas.size() == 0;
                cout << "Random arena is:"  << Arenas.at(arenaNum).name << endl;
                break;
            }
            //if ( arenaNum = stoi(myCharacter)) {
            arenaNum = atoi( myArena.c_str() );
            if (( arenaNum >= 0 )||(arenaNum < Arenas.size()) ) {

                cout << "Chosen arena is:"  << Arenas.at(arenaNum).name << endl;
                break;
            }
            cout << "Please enter valid option: 0,1,2,3...or r for random." << endl;
        }
        cout << "3... 2... 1... Fight" << endl;
        int result = gameLoop(Characters.at(p1num), Characters.at(p2num));
        if (result == 0 ) {
            cout << "0 loses" << endl;
        }
        else
        {
            cout << "1 loses" << endl;
        }

        //option to restart or quit
        cout << "Play again? [Y/n] " ;
        cin >> quitStatus;
        cout << "quitStatus: " << quitStatus << endl;
        if (quitStatus.compare("n") == 0)
        {
            cout << "Thanks for playing." << endl;
            break;
        }
        else
        {
            cout << "Starting Again!" << endl;
        }
    }


}
