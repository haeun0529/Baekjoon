#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector <int>> arr(n, vector<int>(n, 0));
    int num = 1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[i][j] = num;
        }
        num++;
    }

    for(auto x : arr) {
        for(auto y : x) {
            cout << y << ' ';
        }
        cout << endl;
    }

    return 0;
}