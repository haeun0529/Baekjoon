#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

array <int, 5> arr[100005];

bool comp(array<int, 5> &x, array<int, 5> &y) {
    if(x[0] != y[0]) return x[0] < y[0];
    else if(x[1] != y[1]) return x[1] > y[1];
    else if(x[2] != y[2]) return x[2] < y[2];
    else if(x[3] != y[3]) return x[3] > y[3];
    else return x[4] < y[4];
}

int main() {

    int n;
    cin >> n;

    int a, b, c, d, e;
    for(int i=0; i<n; i++) {
        for(int j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }

    sort(arr, arr + n, comp);

    for(int i=0; i<n; i++) {
        for(int j=0; j<5; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}