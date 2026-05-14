#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++) {
        bool flag = true;
        for(int j=0; j<s.size(); j++) {
            if(i==j) continue;
            if(s[i] == s[j]) 
                flag = false;
        }
        if(flag) answer += s[i];
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}