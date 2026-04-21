#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = str1+str2;
    int index=0;
    for(int i=0; i<str1.length()+str2.length(); i++) {
        answer[index++] = str1[i];
        answer[index++] = str2[i];
    }
    return answer;
}