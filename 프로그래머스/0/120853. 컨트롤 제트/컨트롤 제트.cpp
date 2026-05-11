#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int n = 0;
    int tn = 0;
    string temp = "";
    for(int i=0; i<s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9' || s[i] == '-') 
            temp += s[i];
        
        if(s[i] == ' ' && temp != "") { 
            n = stoi(temp);
            answer += n;
            tn = n;
            n = 0;
            temp = "";
        }
        
        if(s[i] == 'Z') 
            answer -= tn;
    }
    
    if(temp != "") answer += stoi(temp);
    
    return answer;
}