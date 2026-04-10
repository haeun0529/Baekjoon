#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int num;
    int pn = 0;
    int p[100];

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        
        int index = 0;
        int sum = 0;

        if (num != -1)
        {
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                    p[index++] = i;
            }
        }

        for(int i=0; i<index; i++) sum += p[i];

        if(sum-1 == num) pn++;
    }

    cout << pn;

    return 0;
}