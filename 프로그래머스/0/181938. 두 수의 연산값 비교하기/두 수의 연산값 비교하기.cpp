#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str1 = to_string(a);
    string str2 = to_string(b);
    string str = str1+str2;
    int max1 = stoi(str);
    
    int max2 = 2 * a * b;
    
    if(max1>=max2) answer = max1;
    else answer = max2;
    
    return answer;
}