#include <iostream>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int pn[10000];
    int min = 10000;
    int pnin = 0;

    for(int i=m; i<=n; i++) {

        int p[10000] = { 0 };
        int index = 0; 
        int sum = 0;

        for(int j=1; j<=i; j++) {
            if(i % j == 0) {
                p[index++] = j;
            }
        }

        for(int i=0; i<index; i++) sum += p[i];

        if(sum-1 == i) pn[pnin++] = i;
    }

    int sum = 0;

    if(pnin == 0) {
        cout << "-1";
        return 0;
    }

    for(int i=0; i<pnin; i++) {
        sum += pn[i];
        if(min >= pn[i]) min = pn[i];
    }
    cout << sum << endl << min;

    return 0;
}