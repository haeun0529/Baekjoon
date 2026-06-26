#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<string, int> &x, pair<string, int> &y) {
    if(x.second != y.second) return x.second > y.second;
    else return x.first < y.first;
}

int main() {

    vector<pair<string, int>> arr;
    pair<string, int> t;
    for(int i=0; i<10; i++) {
        cin >> t.first >> t.second;
        arr.push_back(t);
    }

    sort(arr.begin(), arr.end(), comp);

    for(auto a : arr)
        cout << a.first << ' ' << a.second << endl;

    return 0;
}