#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++)
        answer.push_back(my_string[i]);
    
    for(int i=0; i<queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        
        reverse(answer.begin() + s, answer.begin() + e + 1);
    }
    return answer;
}