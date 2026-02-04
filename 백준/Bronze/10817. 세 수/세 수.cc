#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    int n = 1;

    if ((a >= b && a <= c) || (a <= b && a >= c))
        n = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        n = b;
    else
        n = c;

    cout << n;

    return 0;
}