#include <iostream>
#include <map>
using namespace std;

int main() {

    map <string, int> m;

    string temp;
    int num = 1;
    while(true) {
        cin >> temp;
        if(temp == "end") break;

        m[temp] = num++;
    }

    cout << m.size() << endl;
    for(auto e : m)
        cout << e.first << ' ' << e.second << endl;

    return 0;
}