/*
Challenge: The Mystic Rectangle
Link: https://www.codingame.com/training/easy/the-mystic-rectangle

Solution: 
The plannification of a torus allows for a point a to be in realtion with 1-a (in a parametrized for).
We can use this to decide in which direction to go. E.g. only in X
Suppose this is the map
|-----------------p---------------------------------------------g----|
where p and g ate the player and the goal. To know how to move we need to see which of the distances if smaller
1) going from p to g to the right
|-----------------p----->------->------->------->------->-------g----|
2) going from p back to 0 and the from the end going left towards g
|-<----<-----<----p---------------------------------------------g--<-|

The distance in 1) is given by |x_g - x_p|, using the module to address the case when p in right of g
The distance in 2) is the remainder distance wrt to 1), i.e., the whole thing minus the distance in 1), 
so (1 - |x_g - x_p|), considering it parametrized.
In a 2D setting, do the same for y. Once we have both short distances on x and y, (minx, miny),
we can calculate the diagonal. The diagonal is only possible for some time, after that we are stuck going
either horizontally or vertically. So we want to find the maximum we can move in diagonal, which is given by the mininum
of (minx, miny).
The drawing below is intutitive 
----------------g   -
|               |   |
|               |   | miny
|               |   |
p----------------   -

|---------------|
        minx

If we continued further, we would have to return back, wasting time.
----->------>---g
|  /            |
| /             |
|/              |
p----------------

For the specific problem, x runs to 200 and y to 150.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

const int LIMX = 200;
const int LIMY = 150;

int main(){
    // Current position
    int x, y;
    cin >> x >> y; cin.ignore();
    // Goal Location
    int u, v;
    cin >> u >> v; cin.ignore();
    // Auxiliar variables
    int minx, miny, diag, xpath, ypath;
    float eta;

    // cerr << x << " " << y << " Goal: " << u << " " << v << " Val: " << abs(x + LIMX - u) << endl;

    minx = abs(u - x) < abs(LIMX - abs(u - x)) ? abs(u - x) : abs(LIMX - abs(u - x));
    miny = abs(v - y) < abs(LIMY - abs(v - y)) ? abs(v - y) : abs(LIMY - abs(v - y));

    diag = min(minx, miny);
    xpath = minx - diag;
    ypath = miny - diag;
    //cerr << minx << " " << miny << " Diagonal: " << diag << " Xpath: " << xpath << " Ypath: " << ypath << endl;

    eta = 0.5 * diag + 0.3 * xpath + 0.4 * ypath;
    // The fixed << setprecision(1) below enforces that eta is outputed with one decimal
    // or else it would output just the integer part in the cases where the decimal was 0
    cout << fixed << setprecision(1) << eta << endl;
}