/*
Challenge: Power Of Thor - episode 1
Link: https://www.codingame.com/training/easy/power-of-thor-episode-1
Achievements: 2 out of 2
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct currPos{
    int cTx;
    int cTy;
    };

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    string str;
    currPos Thor;
    Thor.cTx = initialTX;
    Thor.cTy = initialTY;
    
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        str.clear( );
        if( (lightY - Thor.cTy) > 0 ){
            str = 'S';
            Thor.cTy++;
        }
        if( (lightY - Thor.cTy) < 0 ){
            str = 'N';
            Thor.cTy--;
        }
        if( (lightX - Thor.cTx) > 0 ){
            str = str + 'E';
            Thor.cTx++;
        }
        if( (lightX - Thor.cTx) < 0 ){
            str = str + 'W';
            Thor.cTx--;
        }
        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << str << endl;
    }
}