#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr(10);
    for(int i=0; i<10; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int &e : arr)
        cout << e+1 << ' ';

    return 0;
}