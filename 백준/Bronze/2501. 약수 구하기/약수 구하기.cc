#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int size = 0;
    int *p;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) size++;
    }

    p = new int [size];
    int index = 0;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) p[index++] = i;       
    }

    if(size < k) cout << 0;
    else cout << p[k-1];
    
    return 0;
}