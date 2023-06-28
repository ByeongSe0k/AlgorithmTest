#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    
    while(num > 0){
        num -= n;
    }
    num == 0 ? answer = 1 : answer = 0;
    return answer;
}