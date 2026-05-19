#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    char ch = k + '0';
    
    string str = to_string(num);
    for(int i=0; i<str.size(); i++) {
        if(str[i] == ch) {
            answer = i+1;
            break;
        }
        else 
            answer = -1;
    }
    
    return answer;
}