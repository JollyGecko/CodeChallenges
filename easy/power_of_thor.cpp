/*
Challenge: Power Of Thor
Link: https://www.codingame.com/multiplayer/codegolf/power-of-thor
Achievements: 190 Code Size (current best is 45)
*/
#include <iostream>
using namespace std;int a,b,c,d,x;
int main(){cin>>a>>b>>c>>d;while(1){if(x=b-d){cout<<(x>0?(d++,'S'):(d--,'N'));}if(x=a-c){cout<<(x>0?(c++,'E'):(c--,'W'));}cout<<"\n";}}