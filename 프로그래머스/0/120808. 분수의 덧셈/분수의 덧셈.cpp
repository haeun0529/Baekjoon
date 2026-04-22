#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int numer3 = numer1*denom2 + denom1*numer2;
    int denom3 = denom1 * denom2;
    
    int g = gcd(numer3, denom3);
    numer3 /= g;
    denom3 /= g;
    
    answer.push_back(numer3);
    answer.push_back(denom3);

    return answer;
}