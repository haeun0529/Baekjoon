#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    vector<string> temp;
    for(int i=0; i<my_string.size(); i++) {
        temp.push_back(my_string.substr(0, i+1));
    }
    
    for(int i=0; i<temp.size(); i++) {
        if(temp[i] == is_prefix) {
            answer = 1;
            break;
        }
    }
    
    return answer;
}