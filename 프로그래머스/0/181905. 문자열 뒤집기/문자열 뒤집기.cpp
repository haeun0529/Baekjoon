#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    for(int i=0; i<(e-s + 1)/2; i++) {
        swap(my_string[s+i], my_string[e-i]);    
    }
    answer = my_string;
    return answer;
}