#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    if(n % 2 == 0 || n > 100) {
        cout << "INPUT ERROR";
        return 0;
    }

    vector<vector<char>> arr(n, vector<char>(n, ' '));
    char ch = 'A';

    for(int i=n/2; i>=0; i--) {
        for(int j=i; j<n-i; j++) {
            arr[j][i] = ch++;
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