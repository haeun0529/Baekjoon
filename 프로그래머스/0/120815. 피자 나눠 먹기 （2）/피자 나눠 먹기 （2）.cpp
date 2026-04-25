#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int solution(int n) {
    int lcm = n * 6 / gcd(n, 6);
    return lcm / 6;
}

