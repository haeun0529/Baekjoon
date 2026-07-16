#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr;

    char ch;
    int num;
    int index=0;
    for(int i=0; i<n; i++) {
        cin >> ch;
        if(ch == 'i') {
            cin >> num;
            arr.push_back(num);
        }
        else if(ch == 'o') {
            if(arr.empty()) cout << "empty" << endl;
            else {
                cout << arr.back() << endl;
                arr.pop_back();
            }
        }
        else {
            cout << arr.size() << endl;
        }
    }

    return 0;
}