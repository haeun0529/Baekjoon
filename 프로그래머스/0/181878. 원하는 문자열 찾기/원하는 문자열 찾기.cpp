#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    if(myString.size() < pat.size()) {
        answer = 0;
        return answer;
    }
    
    for(char& c : myString) c = tolower(c);
    for(char& c : pat) c = tolower(c);
    
    for(int i=0; i<myString.size(); i++) {
        bool m = true;
        
        for(int j=0; j<pat.size(); j++) {
            if(myString[i+j] != pat[j]) {
                m = false;
                break;
            }
        }
        
        if(m) answer = 1;
    }
    
    return answer;
}