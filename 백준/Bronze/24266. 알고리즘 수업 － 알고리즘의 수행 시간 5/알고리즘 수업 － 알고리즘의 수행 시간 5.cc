#include <iostream>

using namespace std;

int main() {

    long long int n;
    cin >> n;

    long long int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                sum++;
    }

    cout << sum << endl;
    cout << 3;

}