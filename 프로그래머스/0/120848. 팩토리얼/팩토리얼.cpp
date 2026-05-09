#include <string>
#include <vector>

using namespace std;

int factorial(int n) {
    if(n <= 1) return 1;
    else return n * factorial(n-1);
}

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=10; i++) {
        if(factorial(i) == n) 
            answer = i;
        else if(factorial(i) > n) {
            answer = i-1;
            break;
        }
    }
    
    return answer;
}