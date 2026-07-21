#include <iostream>
#include <queue>
using namespace std;

struct Data {
    string name;
    int age;
    double blood;

    bool operator < (const Data &Right) const {
        if(blood == Right.blood)
            return age < Right.age;
        return blood < Right.blood;
    }
};

int main() {

    priority_queue <Data> pq;

    int n;
    cin >> n;
    
    string str;
    string name;
    int age;
    double blood;
    for(int i=0; i<n; i++) {
        cin >> str;
        if(str == "push") {
            cin >> name >> age >> blood;
            pq.push( {name, age, blood} );
        }
        else {
            if(!pq.empty()) {
                cout << pq.top().name << endl;
                pq.pop();
            }
        }
    }

    return 0;
}