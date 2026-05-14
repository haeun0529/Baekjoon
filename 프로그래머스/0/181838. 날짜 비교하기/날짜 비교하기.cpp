#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    
    int y1 = date1[0];
    int m1 = date1[1];
    int d1 = date1[2];
    
    int y2 = date2[0];
    int m2 = date2[1];
    int d2 = date2[2];
    
    if(y1 < y2) answer = 1;
    else if(y1 == y2 && m1 < m2) answer = 1;
    else if(y1 == y2 && m1 == m2 && d1 < d2) answer = 1;
    else answer = 0;
    
    return answer;
}