#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    
    int index = 0;
    for(int i=0; i<k; i++, index+=2) {
        answer = numbers[index % numbers.size()];
    }
    
    return answer;
}