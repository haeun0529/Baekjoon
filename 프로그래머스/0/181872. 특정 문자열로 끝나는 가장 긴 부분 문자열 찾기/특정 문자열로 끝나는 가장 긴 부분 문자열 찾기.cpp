#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    string temp1 = myString;
    string temp2 = pat;
    
    for(char& c : temp1) c = tolower(c);
    for(char& c : temp2) c = tolower(c);
    
    for(int i=0; i<myString.size(); i++) {
        bool m = true;
        
        for(int j=0; j<pat.size(); j++) {
            if(temp1[i - pat.size() + 1 + j] != temp2[j]) {
                m = false;
                break;
            }
        }
        
        if(m) answer = myString.substr(0, i+1);
    }
    
    return answer;
}