#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    string words[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    string temp = "";
    int pos = 0;
    while(pos < numbers.size()) {
        for(int i=0; i<10; i++) {
            if(numbers.find(words[i], pos) == pos) {
                temp += to_string(i);
                pos += words[i].size();
                break;
            }
        }
    }
    answer = stoll(temp);
    
    return answer;
}