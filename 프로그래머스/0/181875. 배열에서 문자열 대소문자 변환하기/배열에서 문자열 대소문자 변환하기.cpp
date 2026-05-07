#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i=0; i<strArr.size(); i++) {
        if(i % 2 == 0) {
            for(char& c : strArr[i]) c = tolower(c);
            answer.push_back(strArr[i]);
        }
        else {
            for(char& c : strArr[i]) c = toupper(c);
            answer.push_back(strArr[i]);
        }
    }
    
    return answer;
}