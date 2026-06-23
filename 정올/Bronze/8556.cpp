#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    int n;
    cin >> n;

    vector<int> arr;
    int temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    int a, b;
    cin >> a >> b;

    reverse(arr.begin()+a, arr.begin()+b+1);
    for(int i=0; i<arr.size(); i++) cout << arr[i] << ' ';
    cout << endl;

    sort(arr.rbegin(), arr.rend());
    for(int i=0; i<arr.size(); i++) cout << arr[i] << ' ';

    return 0;
}