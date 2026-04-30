#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    vector<int> idx;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == 2) 
            idx.push_back(i);
    }
    
    if(idx.empty()) { 
        answer.push_back(-1);
        return answer;
    }
    
    for(int i=idx.front(); i<=idx.back(); i++)
        answer.push_back(arr[i]);
    
    return answer;
}