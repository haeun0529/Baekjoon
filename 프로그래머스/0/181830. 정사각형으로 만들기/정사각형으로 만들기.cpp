#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    
    int row = arr.size();
    int col = arr[0].size();
    
    if(row > col) {
        for(int i=0; i<row; i++) {
            vector<int> temp = arr[i];
            while(temp.size() < row)
                temp.push_back(0);
            answer.push_back(temp);
        }
    }
    else {
        for(int i=0; i<row; i++)
            answer.push_back(arr[i]);
        while(answer.size() < col)
            answer.push_back(vector<int>(col, 0));
    }
    
    return answer;
}