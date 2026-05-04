#include <vector>
using namespace std;
#include <map>

int solution(vector<int> nums)
{
    int answer = 0;

    map<int, int> m;
    
    for(int i=0; i<nums.size(); i++)
        m[nums[i]]++;
    
    for(auto it=m.begin(); it!=m.end(); it++)
        answer++;
    
    answer = min(answer, (int)nums.size()/2);
    
    return answer;
}