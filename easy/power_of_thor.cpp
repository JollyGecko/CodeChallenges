/*
Challenge: Power Of Thor
Link: https://www.codingame.com/multiplayer/codegolf/power-of-thor
Achievements: 244 Code Size (current best is 45)
*/
#include <iostream>
#include <string>
using namespace std;int a,b,c,d,x,y;
void f(){string s;if(y=b-d){s=(y>0?(d++,'S'):(d--,'N'));}if(x=a-c){s+=(x>0?(c++,'E'):(c--,'W'));}cout<<s+"\n";}
int main(){cin>>a>>b>>c>>d;while(1){int rT;cin>>rT;f();}}