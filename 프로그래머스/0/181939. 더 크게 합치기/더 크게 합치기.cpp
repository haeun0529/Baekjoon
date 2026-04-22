#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    string str1 = to_string(a);
    string str2 = to_string(b);
    string res = str1+str2;
    int max1 = stoi(res);

    str1 = to_string(b);
    str2 = to_string(a);
    res = str1+str2;
    int max2 = stoi(res);

    if(max1 >= max2) answer = max1;
    else answer = max2;
    
    return answer;
}