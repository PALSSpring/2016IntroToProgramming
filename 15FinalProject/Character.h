#pragma once

#include <iostream>
#include <string>
#include "Item.h"
//needed for rand, srand
#include <stdlib.h>
using namespace std;

class Character {

public:

    string name;
    string author;
    int health;
    int speed;
    int attackPower;
    Item* item;
    string pronoun;

    Character() {
        //TODO register character to char list vector with char name.
    }

    ~Character() {}
    //returns a std::string with the characters name.
    //This name is used at each combat turn so should be a short or first name Ex. "Grog" not "Grog the Destroyer of Worlds"
    virtual string getShortName() {
        return name;
    }
    
    //get Author name
    virtual string getAuthorName() {
        author = name;
        return author;
    }

    //returns a std::string with the characters full name. Ex. Grog the Destroyer of Worlds
    //This name is used at each combat turn so should be a short or first name
    virtual string getFullName() {
        return name;
    }


    //Returns the characters current health
    virtual int getCurrentHealth() {
        return health;
    }


    //return the item the character is currently holding.
    virtual Item getItem() {
        return *item;
    }


    //a longer description of your character as he/she enters the ring.
    virtual string entersDescription() {
        return name + string(" enters the arena looking rather tired.");
    }


    //character should perform the selected attack if able. Damage is 0 if character misses.
    // may need weapon checks. as well as durability checks after attack.
    virtual int attack(string attackType) {
        return 0;
    }


    //character should respond to the given damage.
    //String should be returned describing their state after taking the damge.
    virtual string takeDamage(int damage) {
        return string("bleh nothing to say. I need a takeDamage method!");
    }


    //A description of how the characters weapon is being held or sheathed. Examples:"Holding his sword tightly, his knuckles dripping with blood". Or "Gripping the baseball bat in his left hand"
    virtual string weaponSlotDesc() {
        return string("with hands empty");
    }


    //losing message. Should be dynamic. Perhaps showing which weapons they lost with or battle statistics.
    virtual string loseMessage() {
        return string("I lost");
    }


    //Same as lostMessage, but for winning
    //win message. Should be dynamic.
    virtual string winMessage() {
        return string("I Win");
    }

private:


};




