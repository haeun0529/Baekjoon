#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long gcd(long long x, long long y) {
    if(y == 0) return x;
    else return gcd(y, x%y);
}

int main() {

    long long p, v, k;
    cin >> p >> v >> k;

    long long a, b, c, d;

    b = k / ((p+1)*(v+1) / gcd(p+1, v+1));
    c = k / (v+1) - b;
    d = k / (p+1) - b;
    a = k - b - c - d;

    cout << a << ' ' << b << ' ' << c << ' ' << d;

    return 0;
}