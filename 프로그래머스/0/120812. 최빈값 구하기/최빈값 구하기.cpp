#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i=0; i<array.size(); i++) {
        for(int j=i+1; j<array.size(); j++) {
            if(array[i] >= array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    int mode = array[0];
    int maxCount = 1;
    
    int current = array[0];
    int count = 1;
    
    int modeCount = 0; 
    
    for(int i = 1; i < array.size(); i++) {
        if(array[i] == current) {
            count++;
        } else {
            if(count > maxCount) {
                maxCount = count;
                mode = current;
                modeCount = 1; 
            } else if(count == maxCount) {
                modeCount++; 
            }
            current = array[i];
            count = 1;
        }
    }
    
    if(count > maxCount) {
        maxCount = count;
        mode = current;
        modeCount = 1;
    } else if(count == maxCount) {
        modeCount++;
    }
    
    if(modeCount >= 2) return -1;
    
    return mode;
}