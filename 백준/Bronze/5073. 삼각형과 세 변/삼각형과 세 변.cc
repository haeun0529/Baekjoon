#include <iostream>
using namespace std;

int main()
{

    int a1, a2, a3;

    while (true)
    {
        cin >> a1 >> a2 >> a3;
        if (a1 == 0 && a2 == 0 && a3 == 0)
            break;

        int res;
        if (a1 >= a2 && a1 >= a3)
            res = a1 - (a2 + a3);
        else if (a2 >= a1 && a2 >= a3)
            res = a2 - (a1 + a3);
        else if (a3 >= a1 && a3 >= a2)
            res = a3 - (a1 + a2);

        if (res < 0)
        {
            if (a1 == a2 && a1 == a3 && a2 == a3)
                cout << "Equilateral" << endl;
            else if (a1 != a2 && a1 != a3 && a2 != a3)
                cout << "Scalene" << endl;
            else 
                cout << "Isosceles" << endl;
        }
        else
            cout << "Invalid" << endl;
        
    }

    return 0;
}