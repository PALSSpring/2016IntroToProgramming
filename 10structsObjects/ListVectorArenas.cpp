#include <iostream>
#include <string>
#include <vector>
#include "Arena.h"
//needed for rand, srand
#include <stdlib.h>

using namespace std;
vector<Arena> Arenas;

int setup() {

    Arena nightArena;
    nightArena.name="Night's Arena";
    Arenas.push_back(nightArena);

    Arena dayArena;
    dayArena.name="Day's Arena";
    Arenas.push_back(dayArena);
    return 0;
}

int showArenas() {
    cout << "Arenas: " <<  endl;

    for(vector<Arena>::const_iterator ii = Arenas.begin(); ii != Arenas.end(); ii++)
    {
        cout << "Arena: " << (*ii).name << endl;
    }
    return 0;
}

int main () {
    /*
      Setup Arenas then show the Arenas using Vectors

    */

    setup();
    showArenas();

}