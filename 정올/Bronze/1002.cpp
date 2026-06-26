#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y) {
    if(y == 0) return x;
    else return gcd(y, x%y);
}

int main() {

    int n;
    cin >> n;

    vector<int> arr;
    int temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    int n1 = arr[0];
    long long n2 = arr[0];

    for(int i=1; i<n; i++) {
        n2 = (n2 * arr[i]) / gcd(n2, arr[i]);
        n1 = gcd(n1, arr[i]);
    }

    cout << n1 << ' ' << n2;

    return 0;
}