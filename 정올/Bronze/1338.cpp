#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<char>> arr(n, vector<char>(n, ' '));
    char ch = 'A';

    for(int i=0; i<n; i++) {
        for(int j=i, k=n-1; j<n; j++, k--) {
            arr[j][k] = ch++;
            if(ch > 'Z') ch = 'A';
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