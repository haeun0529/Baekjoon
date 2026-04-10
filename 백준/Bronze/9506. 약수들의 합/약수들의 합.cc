#include <iostream>
using namespace std;

int main() {

    int n;
    int p[1000000];

    while(true) {
        cin >> n;
        if(n == -1) break;

        int sum = 0;
        int index = 0;
        
        for(int i=1; i<n; i++) {
            if(n % i == 0) p[index++] = i;
        }

        for(int i=0; i<index; i++) sum += p[i];

        if(sum == n) {
            cout << n << " = ";
            for(int i=0; i<index; i++) {
                cout << p[i];
                if(i<index-1) cout << " + ";
            }
        }
        else cout << n << " is NOT perfect.";
        cout << endl;
    }
    
    return 0;
}