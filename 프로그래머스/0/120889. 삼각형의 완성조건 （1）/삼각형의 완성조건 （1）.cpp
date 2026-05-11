#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end());
    
    int a = sides[0];
    int b = sides[1];
    int c = sides[2];
    
    if(c < a+b) answer = 1;
    else answer = 2;
    
    return answer;
}