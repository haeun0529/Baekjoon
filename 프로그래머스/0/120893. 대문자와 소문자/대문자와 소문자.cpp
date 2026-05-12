#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++) {
        if(my_string[i] >= 'a' && my_string[i] <= 'z')
            answer += (char)(my_string[i] - 32);
        else
            answer += (char)(my_string[i] + 32);
        
    }
    
    return answer;
}