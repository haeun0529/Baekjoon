#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
   
    int index = 0;
    
    if(n_str.front() == '0') {
        for(int i=0; i<n_str.size(); i++) {
            if(n_str[i] != '0') {
                index = i;
                break;
            }
        }
    }
    
    for(int i = index; i<n_str.size(); i++)
        answer += n_str[i];
    
    return answer;
}