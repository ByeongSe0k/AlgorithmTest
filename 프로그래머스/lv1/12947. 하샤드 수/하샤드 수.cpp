#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int hashard = 0;
    int originNum = x;
    while(x > 10){
        hashard += x % 10;
        x = x / 10;
    }
    
    hashard += x;
    if(originNum % hashard != 0){
        answer = false;
    }
    return answer;
}