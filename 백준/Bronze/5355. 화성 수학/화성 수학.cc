#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;

    double num;
    string s, str;

    for(int i=0; i<n; i++) {
        str = "";
        cin >> num;
        getline(cin, s);
        for(char c : s) {
            if(c != ' ') str += c;
        }

        for(int j=0; j<str.size(); j++) {
            if(str[j]=='@')
                num *= 3.0;
            if(str[j]=='%')
                num += 5.0;
            if(str[j]=='#')
                num -= 7.0;
        }

        printf("%.2f\n", num);
    }

    return 0;
}