#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    map<int, int> m;
    
    for(int i=0; i<strArr.size(); i++) {
        m[strArr[i].size()]++;
    }
    
    int max = 0;
    for(auto i : m) {
        if(i.second > max)
            max = i.second;
    }
    
    return max;
}