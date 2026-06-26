#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

    int n;
    cin >> n;

    int a, b;
    vector<pair <int, int>> arr;
    pair <int, int> t;
    for(int i=0; i<n; i++) {
        cin >> t.first >> t.second;
        arr.push_back(t);
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++) {
        cout << arr[i].first * arr[i].second << endl;
    }

    return 0;
}