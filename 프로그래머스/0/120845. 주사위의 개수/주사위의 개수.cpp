#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    
    int w = box[0];
    int d = box[1];
    int h = box[2];
    
    answer = w / n;
    answer *= d / n;
    answer *= h / n;
    
    return answer;
}