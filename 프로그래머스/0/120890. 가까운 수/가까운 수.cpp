#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    if(array.front() >= n) {
        answer = array.front();           
        return answer;
    }
        
    if(array.back() <= n) {
        answer = array.back();
        return answer;
    }
    
    int max = 100;
    int min = 0;
    for(int i=0; i<array.size()-1; i++) {
        if(n > array[i] && n <= array[i+1]) {
            max = array[i+1];
            min = array[i];
            
            if(abs(n-max) < abs(n-min)) answer = array[i+1];
            else answer = array[i];
            break;
        }
    }
    
    return answer;
}