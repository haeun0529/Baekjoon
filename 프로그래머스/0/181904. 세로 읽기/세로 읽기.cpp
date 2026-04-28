#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    string temp = "";
    for(int i=c-1; i<my_string.size(); i+=m) {
        temp += my_string[i];
    }
    answer = temp;
    
    return answer;
}