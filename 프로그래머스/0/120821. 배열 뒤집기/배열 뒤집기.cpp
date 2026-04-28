#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i=0; i<num_list.size() / 2; i++) {
        swap(num_list[i], num_list[num_list.size()-i-1]);
    }

    for(int i=0; i<num_list.size(); i++)
        answer.push_back(num_list[i]);
    
    return answer;
}