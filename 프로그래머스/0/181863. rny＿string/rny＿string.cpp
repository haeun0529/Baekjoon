#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    
    int index = 0;
    for(int i=0; i<rny_string.size(); i++) {
        if(rny_string[i] == 'm') {
            answer += 'r';
            answer += 'n';
            index += 2;
        }
        else {
            answer += rny_string[i];
            index++;
        }
    }
    
    return answer;
}