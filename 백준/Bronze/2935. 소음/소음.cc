#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char n1[101], n2[101], op;

    cin >> n1 >> op >> n2;

    int len1 = strlen(n1);
    int len2 = strlen(n2);

    if (op == '*')
    {
        if (len1 == 1 && len2 == 1)
            cout << "1";
        else
        {
            cout << "1";
            if (len1 != 1 || len2 != 1)
                for (int i = 0; i < len1 + len2 - 2; i++)
                    cout << "0";
            else
                for (int i = 0; i < len1 + len2 - 1; i++)
                    cout << "0";
        }
    }
    else
    {
        int max = (len1 >= len2) ? len1 : len2;
        int min = (len1 < len2) ? len1 : len2;

        if (len1 == len2)
        {
            cout << "2";
            for (int i = 0; i < len1 - 1; i++)
                cout << "0";
        }
        else
        {
            cout << "1";
            for (int i = 0; i < max - 1; i++)
            {
                if (i == max - min - 1)
                    cout << '1';
                else
                    cout << '0';
            }
        }

        return 0;
    }
}