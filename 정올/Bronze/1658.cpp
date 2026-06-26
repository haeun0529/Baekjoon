#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if(y == 0) return x;
    return gcd(y, x%y);
}

int main() {

    int a, b;
    cin >> a >> b;

    int n1, n2;
    n1 = gcd(a, b);
    n2 = a*b / n1;

    cout << n1 << endl << n2;

    return 0;
}