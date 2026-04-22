#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int *arr = new int[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int max = 0, sum = 0;
    int res;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= m && sum > max) max = sum;
            }
        }
    }
    cout << max;

    return 0;
}