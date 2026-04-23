#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++)
        answer.push_back(arr[i]);
    
    for(int i=0; i<queries.size(); i++) {
        for(int j=0; j<queries[i].size()-1; j++) {
            int temp = answer[queries[i][j]];
            answer[queries[i][j]] = answer[queries[i][j+1]];
            answer[queries[i][j+1]] = temp;
        }
    }
    
    return answer;
}