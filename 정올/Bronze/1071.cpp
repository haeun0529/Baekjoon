#include <iostream>
using namespace std;

int main() {

    int n;
    int arr[100];
    
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];

    int a;
    cin >> a;
    
    int sum1=0;
    int sum2=0;

    for(int i=0; i<n; i++) 
        if(a % arr[i] == 0) 
            sum1 += arr[i];
    
    for(int i=0; i<n; i++)
        if(arr[i] % a == 0)
            sum2 += arr[i];

    cout << sum1 << endl;
    cout << sum2;

    return 0;
}