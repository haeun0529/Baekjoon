#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int left, int right) {
    if((left%10) != (right%10))
        return (left%10) < (right%10);
    else if(((left%100)/10) != ((right%100)/10))
        return (left%100)/10 < (right%100)/10;
    else
        return left < right;
}

int main()
{

    int n, temp;
    cin >> n;

    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), comp);
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << endl;

    return 0;
}