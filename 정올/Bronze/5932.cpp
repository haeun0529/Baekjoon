#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));
    int num = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i%2==0) arr[i][j] = ++num;
            else arr[i][j] = num--;
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