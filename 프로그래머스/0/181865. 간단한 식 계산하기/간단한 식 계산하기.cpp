#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    vector<string> s;
    
    string temp = "";
    for(int i=0; i<binomial.size(); i++) {
        if(binomial[i] != ' ')
            temp += binomial[i];
        else {
            if(temp != "") {
                s.push_back(temp);
                temp = "";
            }
        }
    }
    if(temp != "") s.push_back(temp);
    
    int n1 = stoi(s[0]);
    int n2 = stoi(s[2]);
    
    if(s[1] == "+") answer = n1+n2;
    else if(s[1] == "-") answer = n1-n2;
    else answer = n1*n2;
    
    return answer;
}