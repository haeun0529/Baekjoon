#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    vector<int> temp = {a,b,c,d};
    sort(temp.begin(), temp.end());
    
    if(a==b && b==c && c==d) {
        int p = a % 10;
        answer += 1111*p;
    }
    else if((temp[0] == temp[1]) && (temp[1] == temp[2])) {
        int p = temp[0];
        int q = temp[3];
        if(p!=q)
            answer += (10 * p + q)*(10 * p + q);
    }
    else if((temp[1] == temp[2]) && (temp[2] == temp[3])) {
        int p = temp[1];
        int q = temp[0];
        if(p!=q)
            answer += (10 * p + q)*(10 * p + q);
    }
    else if((temp[0] == temp[1]) && (temp[2] == temp[3])) {
        int p = temp[0];
        int q = temp[2];
        if(p!=q)
            answer += (p + q) * abs(p - q);
    }
    else if((temp[0] == temp[1]) && (temp[2] != temp[3])) {
        int p = temp[0];
        if(p != temp[2] && p != temp[3])
            answer += temp[2] * temp[3];
    }
    else if((temp[1] == temp[2]) && (temp[0] != temp[3])) {
        int p = temp[1];
        if(p != temp[0] && p != temp[3])
            answer += temp[0] * temp[3];
    }
    else if((temp[2] == temp[3]) && (temp[0] != temp[1])) {
        int p = temp[2];
        if(p != temp[0] && p != temp[1])
            answer += temp[0] * temp[1];
    }
    else {
        int m = min({a,b,c,d});
        answer += m;
    }
    
    return answer;
}