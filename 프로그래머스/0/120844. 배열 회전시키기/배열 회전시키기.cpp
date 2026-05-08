#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    int start = numbers.front();
    int end = numbers.back();
    
    if(direction == "right") answer.push_back(end);
    
    for(int i=0; i<numbers.size()-1; i++) {
        if(direction == "right") 
            answer.push_back(numbers[i]);
        else 
            answer.push_back(numbers[i+1]);
    }
    
    if(direction == "left") answer.push_back(start);
    
    return answer;
}