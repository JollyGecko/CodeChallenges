/*
Challenge: Chuck Norris
Link: https://www.codingame.com/training/easy/chuck-norris
Achievements: 2 out of 2
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> turn_to_bin(int c){
    vector<int> aux;
    for(; c > 0;){
    aux.insert(aux.begin(), 1, (int) c%2);
    c = (int) c/2;
    }
    // To turn into a 7-bit binary. We might need to add a 0 in the beginning of the number
    if(aux.size()<7){
        aux.insert(aux.begin(), 0);
    }
  return aux;
};

string vector_to_string(vector<int> a){
    string aux;
    for(vector<int>::iterator it = a.begin(); it < a.end(); it++){
        aux.append(to_string(*it));
    }
    return aux;
}

string binary_to_chuck_code(string a){
    string aux;
    char c;
    int i = 0, count = 0;
    
    // Runs the whole string a
    while(i < a.length()){
        c = a[i]; // c holds the value (0 or 1) of the beginning of the current substring
        // cerr << "VALUE OF c: " << c << endl;
        count = 0; // This will hold the number of chars equal to c in the subsequent rest of the string
        while(c == a[i]){ // this runs until it finds a character different from c
            count++;
            i++; // Move to the next character in the string
            // cerr << "valor de i: " << i << endl;
            // cerr << "valor de count: " << count << endl;
        }
        if(c == '1'){ // if c was 1, append a single 0
            aux.append("0 ");
        }
        if(c == '0'){ // if c was 0, append double 00
            aux.append("00 ");
        }
        for(int j = 0; j < count; j++){
            // append count number of 0s to the string
            aux.append("0");
        }
        // insert a space before looking at the next character
        aux.append(" ");
        // cerr << "String aux at the end of while: " << aux << endl;
    }
    return aux.substr(0, aux.size()-1);
}

int main(){
    string originMsg, binMsg, binCharStr, CNCMsg;
    vector<int> binChar;
    getline(cin, originMsg);

    //cerr << "Original Message:\n" << originMsg << endl;
    for( int i = 0; i < originMsg.length( ); i++){
        // cerr << "Character " << originMsg[i] << " in decimal: " << (int) originMsg[i] << endl;
        binChar.clear();
        binChar = turn_to_bin((int) originMsg[i]);
        binCharStr = vector_to_string(binChar);
        // cerr << "Character " << originMsg[i] << " in binary: " << binCharStr << endl;

        binMsg.append(binCharStr);
    }
    //cerr << "Binary Message:\n" << binMsg << endl;
    CNCMsg = binary_to_chuck_code(binMsg);
    
    cout << CNCMsg << endl;
}