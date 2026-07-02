#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<char>> arr(n, vector<char>(n, 'A'));
    char ch = 'A';

    for(int i=0; i<n; i++) {
        if(i%2==0) {
            for(int j=0; j<n; j++) {
                arr[j][i] = ch++;
                if(ch > 'Z') ch = 'A';
            }
        }
        else {
            for(int j=n-1; j>=0; j--) {
                arr[j][i] = ch++;
                if(ch > 'Z') ch = 'A';
            }
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