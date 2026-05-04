#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> m;
    
    for(string p : participant)
        m[p]++;
    
    for(string p : completion)
        m[p]--;
    
    for(auto it=m.begin(); it!=m.end(); it++)
        if(it->second > 0)
            answer = it->first;
    
    return answer;
}