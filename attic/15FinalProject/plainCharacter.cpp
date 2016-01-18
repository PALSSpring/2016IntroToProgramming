#pragma once

#include <iostream>
#include <string>
#include "Item.h"
//needed for rand, srand
#include <stdlib.h>
#include "Character.h"
#include "plainCharacter.h"

    plainCharacter::plainCharacter() 
    {
        name = "Default Name";
        //Randomize speed
        srand(time(NULL));
        speed = rand() % 100;
        health = 100;
        attackPower = 100;
        pronoun = string("s/he");
        item = new Brush();
    }
    string plainCharacter::takeDamage(int damage) {
        health = health - damage;
        std::cout << "Health: " << health << endl;
        return string("'Tis but a scratch!");
    }
    int plainCharacter::attack(string attackType) {
       // srand(time(NULL));
        //return (rand() % 10) + 1 ;
        cout << "Attack: " << endl;
        return 10;
    }
    
      //losing message. Should be dynamic. Perhaps showing which weapons they lost with or battle statistics.
     string plainCharacter::loseMessage() {
        return string("I lost");
    }

    //Same as lostMessage, but for winning
    //win message. Should be dynamic.
     string plainCharacter::winMessage() {
        return string("I Win");
    }
