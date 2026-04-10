#include <iostream>
using namespace std;

int main()
{

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int min1 = w - x;
    int min2 = h - y;
    int min3 = min1 < min2 ? min1 : min2;

    if(min3 < x && min3 < y) cout << min3;
    else {
        if(x < y) cout << x;
        else cout << y;
    }

    return 0;
}