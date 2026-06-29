#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    int num = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[j][i] = num++;
        }
    }

    for(auto x : arr) {
        for(auto y : x) {
            cout << y << ' ';
        }
        cout << endl;
    }

    return 0;
}