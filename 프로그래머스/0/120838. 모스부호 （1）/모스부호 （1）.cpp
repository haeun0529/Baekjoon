#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";

    map<string, string> morse = { 
    {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},
    {".","e"},{"..-.","f"},{"--.","g"},{"....","h"},
    {"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
    {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},
    {"--.-","q"},{".-.","r"},{"...","s"},{"-","t"},
    {"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
    {"-.--","y"},{"--..","z"}
    };

    string temp = "";
    for(int i=0; i<letter.size(); i++) {
        if(letter[i] == ' ') {
            answer += morse[temp];
            temp = "";
        }
        else {
            temp += letter[i];
        }
    }
    answer += morse[temp];
    
    return answer;
}