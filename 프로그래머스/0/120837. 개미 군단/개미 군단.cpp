#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    int a = 5; // 장군
    int b = 3; // 병정
    int c = 1; // 일
    
    while(hp != 0) {
        if(hp / a > 0) {
            hp -= a;
            answer++;
        }
        else if(hp / b > 0) {
            hp -= b;
            answer++;
        }
        else {
            hp--;
            answer++;
        }
    }
    
    return answer;
}