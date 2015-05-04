#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

class Character {
public:
    string name;
    int intelligence;
    int health;
    int speed;
    int power;
    int attack;
    int energy;
    int defense;
    string winStatement;
    string loseStatement;
    Item item;
    string outfit;
    string hair;
    string homeArena;
    int SpecialPowerValue;
    string specialpowerdescription;
    string desc;
    string eyecolor;
    string complexion;

private:

};

class plainCharacter : public Character {
public:
    plainCharacter() {
        intelligence = 10;
        health = 10;
        speed = 1;
        power = 1;
        attack = 1;
        energy = 1;
        defense = 0;
        winStatement = "I win";
        loseStatement = "I lose";
        Item club;
        outfit = "Coat";
        string hair = "brown";
        homeArena = "PLaineVanilla";
        SpecialPowerValue = 0;
        specialpowerdescription = "none";
        desc = "plain character";
        eyecolor = "brown";
        complexion = "brown";
    }
private:
};
