#include <iostream>
#include <queue>
using namespace std;

struct Data {
    int x, y, z;
};

int main() {

    queue <Data> qq;
    
    int n;
    cin >> n;

    char ch;
    int x, y, z, num;
    for(int i=0; i<n; i++) {
        cin >> ch;
        if(ch == 'i') {
            cin >> x >> y >> z;
            qq.push( {x, y, z} );
        }
        else if(ch == 'o') {
            if(!qq.empty()) {
                cout << qq.front().x << ' ' << qq.front().y << ' ' << qq.front().z << endl;
                qq.pop();
            }
            else {
                cout << "empty" << endl;
            }
        }
        else if(ch == 'c') {
            cout << qq.size() << endl;
        }
        else {
            cin >> num;
            if(!qq.empty()) {
                if(qq.front().z == num) 
                    cout << "yes" << endl;
                else
                    cout << "no" << endl;
            }
            else cout << "no" << endl;
        }
    }

    return 0;
}