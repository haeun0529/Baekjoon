#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr;
    int temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    
    int min = 1000000000;
    for(int i=0; i<n-1; i++) {
        if(arr[i+1]-arr[i] <= min)
            min = arr[i+1]-arr[i];
    }

    cout << min;

    return 0;
}

// 2 19 39 50 60 90 100