#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(vector<int> &l, vector<int> &r) {
    if(l[3] != r[3]) return l[3] < r[3];
    else return l[1] < r[1];
}

int main() {

    std::cin.tie(0); 
    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(4, 0));
    int s, e;
    for(int i=0; i<n; i++) {
        cin >> s >> e;
        arr[i][0] = i+1;
        arr[i][1] = s;
        arr[i][2] = e;
        arr[i][3] = e-s;
    }

    sort(arr.begin(), arr.end(), comp);
    
    for(int i=0; i<n; i++) cout << arr[i][0] << '\n';

    return 0;
}