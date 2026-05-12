#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    int r1, r2, r3;
    int count = 0;
    int m = 10000;
    for(int i=0; i<rank.size(); i++) {
        if(count == 3) break;
        
        auto it = min_element(rank.begin(), rank.end());
        
        if(attendance[it - rank.begin()]) {
            answer += m * (it - rank.begin());
            m /= 100;
            count++;
        }
            
        *it = 101;
    }
    
    return answer;
}