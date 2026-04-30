#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 0, 1, 3, 6, 10, 11, 15, 16
string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    sort(indices.begin(), indices.end());
    
    for(int i=0; i<indices.size(); i++) {
        my_string[indices[i]] = ' ';
    }

    for(int i=0; i<my_string.size(); i++) {
        if(my_string[i] != ' ') answer += my_string[i];
    }
    
    return answer;
}