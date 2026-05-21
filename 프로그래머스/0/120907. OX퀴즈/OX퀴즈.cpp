#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i=0; i<quiz.size(); i++) {
        vector<int> number;
        string op;
        string temp = "";
    
        for(int j=0; j<quiz[i].size(); j++) {
            if(quiz[i][j] == ' ') {
                if(temp == "+" || temp == "-")
                    op = temp;
                else if(temp == "=")
                    temp = "";
                else if(temp != "")
                    number.push_back(stoi(temp));
                temp = "";
            } 
            else temp += quiz[i][j];
        }
        if(temp != "") number.push_back(stoi(temp)); 

        int n1 = number[0];
        int n2 = number[1];
        int n3 = number[2];
        if(op == "+") {
            if(n1 + n2 == n3) answer.push_back("O");
            else answer.push_back("X");
        }
        else {
            if(n1 - n2 == n3) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    
    return answer;
}