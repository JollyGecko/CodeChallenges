/*
Challenge: Power Of Thor
Link: https://www.codingame.com/multiplayer/codegolf/power-of-thor
Achievements: 185 Code Size (current best is 45)
To use this solution, remove this comment lines
*/
#include <iostream>
using namespace std;int a,b,c,d;int main(){cin>>a>>b>>c>>d;while(1){if(b!=d){cout<<(b>d?(d++,'S'):(d--,'N'));}if(a!=c){cout<<(a>c?(c++,'E'):(c--,'W'));}cout<<"\n";}}