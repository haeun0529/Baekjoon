#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i=0; i<my_string.size(); i++)
        answer.push_back(my_string.substr(i));
    
    for(int i=0; i<answer.size(); i++) {
        for(int j=i+1; j<answer.size(); j++) {
            if(answer[i] > answer[j]) {
                swap(answer[i], answer[j]);
            }
        }
    }
    
    return answer;
}