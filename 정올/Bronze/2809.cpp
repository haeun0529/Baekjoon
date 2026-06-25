#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr;

    for(int i=1; (long long)i*i<=n; i++) {
        if(n % i == 0) {
            arr.push_back(i);
            if(i != n / i)
                arr.push_back(n/i);
        }
    }

    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++) cout << arr[i] << ' ';

    return 0;
}