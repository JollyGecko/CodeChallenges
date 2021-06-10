/*
Challenge: Temperatures
Link: https://www.codingame.com/training/easy/temperatures
Achievements: 2 out of 2
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    vector<int> vtemp;
    vector<int>::iterator it;
    it = vtemp.begin();
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++, it++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        it = vtemp.insert(it, t);
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    //cerr << "Valor de N = " << n << endl;
    int temp;
    if( n <= 0 ){
        temp = 0;
    }
    else{    
    
    temp = vtemp[0];
    //cerr << "vTemp = " << vtemp[0] << endl;
    for( int i = 1; i < n; i++){
        //cerr << "vTemp = " << vtemp[i] << " Temp = " << temp << endl;
        if( abs (vtemp[i]) < abs( temp ) ){
            temp = vtemp[i];
            continue;
        }
        if( abs( vtemp[i] ) == abs(temp ) and temp < 0 ){
            temp = vtemp[i];
        }
    }}

    cout << temp << endl;
}