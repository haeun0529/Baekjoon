#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> arr;
    for(int i=1; i<=n; i++) if(n % i == 0) arr.push_back(i);

    int r = arr[k-1];
    cout << r;

    return 0;
}