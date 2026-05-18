#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    auto it = max_element(array.begin(), array.end());
    
    answer.push_back(*it);
    answer.push_back(it - array.begin());
    
    return answer;
}