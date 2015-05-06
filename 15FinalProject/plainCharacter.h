#pragma once

#include "Item.h"
#include "Character.h"



class plainCharacter : public Character {
    
public:
    plainCharacter();
    string takeDamage(int damage) ;
    int attack(string attackType);
    string loseMessage();
    string winMessage();
private:

};