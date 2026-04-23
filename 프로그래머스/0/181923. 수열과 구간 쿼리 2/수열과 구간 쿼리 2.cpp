#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0; i<queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        bool found = false;
        int max = 1000001;
        for(int j=s; j<=e; j++) {
            if(arr[j] > k && arr[j] < max) {
                max = arr[j];
                found = true;
            }
        }
        
        if(found) answer.push_back(max);
        else answer.push_back(-1);
    }
    
    return answer;
}