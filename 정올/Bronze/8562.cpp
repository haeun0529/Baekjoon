#include <iostream>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    map <int, int> m;
    char ch;
    int num, index=0, t=1;

    for(int i=0; i<n; i++) {
        cin >> ch;
        if(ch == 'f') {
            cin >> num;
            if(m.find(num) != m.end()) cout << "YES " << m[num] << endl;
            else cout << "NO" << endl; 
        }
        else if(ch == 'a') {
            cin >> num;
            if(m.find(num) != m.end()) m[num]++;
            else m[num] = 1;
        }
        else {
            cout << m.size() << endl;
        }
    }

    return 0;
}