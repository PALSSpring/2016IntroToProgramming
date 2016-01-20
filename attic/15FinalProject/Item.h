#pragma once

#include <iostream>
#include <string>

using namespace std;
#pragma once

class Item {
public:
    string kind;
    string name;
    string desc;
    int modifier;
    
     //Where is the weapon held when wielded? 
     //ex. a baseball would be wielded in the right hand. 
     //A sword could be wielded in both or a single hands, or a pair of swords can each be held in their own hand
    string wieldSlotDesc;
    
    //Where the weapon is when not in use. may not apply to some weapons. 
    //Ex. A sword could be sheathed on their belt. 
    //a baseball could be held in the pocket. 
    string storedSlotDesc;;
    
    
    //returns the damage from attacking.
    virtual int attack(string attackType){return 0;}
    

private:
};

class Brush : public Item {
    public:
    Brush() {
        kind = "ranged";
        name = "Ink Brush of Destiny";
        desc = "The Brush of Destiny is draws attack words that strike your opponent.";
        modifier = 10;
        wieldSlotDesc = "Held in one hand.";
        storedSlotDesc = "Stored in a caligraphy box.";
    }
    int attack(string attackType) {
        return modifier;
    }  
    private:
    
};