#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    
    for(int i=0; i<num_str.size(); i++) {
        int n = num_str[i] - '0';
        answer += n;
    }
    
    return answer;
}