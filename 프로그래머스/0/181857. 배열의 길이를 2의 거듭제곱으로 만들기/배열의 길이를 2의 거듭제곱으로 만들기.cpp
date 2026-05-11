#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int n = 0;
    int i = 0;
    while(true) {
        if(arr.size() <= (int)pow(2, i)) {
            n = i;
            break;
        }
        i++;
    }
    
    for(int i=0; i<(int)pow(2, n); i++) {
        if(i < arr.size())
            answer.push_back(arr[i]);
        else
            answer.push_back(0);
    }
    
    return answer;
}