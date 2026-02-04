#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 2;
    while (n != 1)
    {
        if (n % i == 0) {
            cout << i << endl;
            n /= i;
        }
        else 
            i++;
    }

    return 0;
}