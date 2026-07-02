#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> v(n, x);

    char ch;
    int a;
    while(true) {
        cin >> ch;
        if(ch == 'i') {
            cin >> a;
            v.push_back(a);
        }
        else if(ch == 'r') {
            if(!v.empty()) v.pop_back();
        }
        else if(ch == 's') {
            sort(v.begin(), v.end());
        }
        else if(ch == 't') {
            if(!v.empty()) {
                int temp = v[0];
                v[0] = v[v.size()-1];
                v[v.size()-1] = temp;
            }
        }
        else {
            for(auto e : v) cout << e << ' ';
            break;
        }
    }

    return 0;
}