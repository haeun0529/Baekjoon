#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    char ch = 'A';
    vector<vector<char>> arr(n, vector<char>(n, 'A'));
    for(int i=n-1; i>=0; i--) {
        for(int j=n-1; j>=0; j--) {
            arr[j][i] = ch++;
            if(ch > 'Z') ch='A';
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