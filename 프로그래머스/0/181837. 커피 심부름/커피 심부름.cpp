#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(int i=0; i<order.size(); i++) {
        if(order[i] == "iceamericano" || order[i] == "americanoice"
          || order[i] == "hotamericano" || order[i] == "americanohot" || order[i] == "americano")
            answer += 4500;
        else if(order[i] == "icecafelatte" || order[i] == "cafelatteice" || order[i] == "hotcafelatte" || order[i] == "cafelattehot" || order[i] == "cafelatte")
            answer += 5000;
        else
            answer += 4500;
    }
    
    return answer;
}