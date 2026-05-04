#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
   
    string str = "";
    for(int i=0; i<n; i++) {
        str += "*";
        cout << str << endl;
    }
    
    return 0;
}