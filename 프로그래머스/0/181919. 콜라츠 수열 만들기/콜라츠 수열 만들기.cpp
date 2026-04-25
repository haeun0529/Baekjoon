#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    answer.push_back(n);
    for(int i=n; ;) {
        if(i == 1) break;
        
        if(i % 2 == 0) {
            answer.push_back(i/2);
            i /= 2;
        }
        else {
            answer.push_back(3*i+1);
            i = 3*i + 1;
        }
    }
    
    return answer;
}