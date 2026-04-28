#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    string temp;
    int iTemp;
    
    for(int i=0; i<intStrs.size(); i++) {
        temp = "";
        string str = intStrs[i];
        for(int j=s; j<s+l && j<str.size(); j++) {
            temp += str[j];
        }
        iTemp = stoi(temp);
        if(iTemp > k) answer.push_back(iTemp);
    }
    
    return answer;
}