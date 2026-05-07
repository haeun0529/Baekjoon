#include <string>
#include <vector>
#include <cmath>

using namespace std;

double f(int n) {
    if(n <= 1) return 1;
    return n * f(n-1);
}

int solution(int balls, int share) {
    int answer = round(f(balls) / ( (f(balls-share)) * f(share) ));
    return answer;
}