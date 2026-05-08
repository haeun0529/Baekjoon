#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i=0; i<myString.size(); i++) {
        if(myString[i] == 'A') myString[i] = 'B';
        else myString[i] = 'A';
    }
    
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