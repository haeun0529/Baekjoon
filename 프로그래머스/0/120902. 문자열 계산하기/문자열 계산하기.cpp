#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    vector<int> m;
    string op;
    
    string temp = "";
    for(int i=0; i<my_string.size(); i++) {
        if(my_string[i] != ' ' && my_string[i] != '+' && my_string[i] != '-')
            temp += my_string[i];
        else if(my_string[i] == '+' || my_string[i] == '-') {
            if(temp != "") m.push_back(stoi(temp)); 
            op += my_string[i];
            temp = "";
        }
        else {
            if(temp != "") {
                m.push_back(stoi(temp));
                temp = "";
            }   
        }
    }
    if(temp != "") m.push_back(stoi(temp));
    
    answer = m[0];
    for(int i=0; i<op.size(); i++) {
        if(op[i] == '+') answer += m[i+1];
        else answer -= m[i+1];
    }
    
    return answer;
}