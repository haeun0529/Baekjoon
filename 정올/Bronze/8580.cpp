#include <vector>
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<vector<int>> v;

    int index, t;
    for(int i=0; i<n; i++) {
        cin >> index;
        vector<int> temp;
        for(int j=0; j<index; j++) {
            cin >> t;
            temp.push_back(t);
        }
        v.push_back(temp);
    }

    for(int i=0; i<n; i++) {
        int o;
        cin >> o;
        for(auto y : v[o])
            cout << y << ' ';
        cout << endl;
    }

    return 0;
}