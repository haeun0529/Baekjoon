#include <iostream>
#include <string>
using namespace std;

int main()
{

    int h, m, s;
    int d;

    cin >> h >> m >> s;
    cin >> d;

    int t = d / 60;
    int n = d % 60;
    if (t >= 60)
    {
        int t2 = t / 60;
        int n2 = t % 60;
        if (t2 >= 60)
        {
            int n3 = t2 % 24;
            h += n3;
            m += n2;
            s += n;
        }
        else
        {
            h += t2;
            m += n2;
            s += n;
        }
    }
    else
    {
        m += t;
        s += n;
    }

    if (s >= 60)
    {
        m++;
        s %= 60;
    }
    if (m >= 60)
    {
        h++;
        m %= 60;
    }
    if (h >= 24)
        h %= 24;

    cout << h << " " << m << " " << s;

    return 0;
}