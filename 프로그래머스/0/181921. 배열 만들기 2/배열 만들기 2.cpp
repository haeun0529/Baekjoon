#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int temp = 0;
    for(int i=l; i<=r; i++) {
        string s = to_string(i);
        bool ok = true;

    for(int j = 0; j < s.size(); j++) {
        if(s[j] != '0' && s[j] != '5') {
            ok = false;
            break;
        }
    }

    if(ok) {
        answer.push_back(i);
        temp++;
        }
    }
    
    if(temp == 0) answer.push_back(-1);
    
    return answer;
}