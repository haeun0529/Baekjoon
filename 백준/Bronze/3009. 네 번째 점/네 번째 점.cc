#include <iostream>
using namespace std;

int main()
{

    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int dx, dy;

    if(x1 == x2) dx = x3;
    else if(x2 == x3) dx = x1;
    else dx = x2;

    if(y1 == y2) dy = y3;
    else if(y2 == y3) dy = y1;
    else dy = y2;

    cout << dx << " " << dy;

    return 0;
}