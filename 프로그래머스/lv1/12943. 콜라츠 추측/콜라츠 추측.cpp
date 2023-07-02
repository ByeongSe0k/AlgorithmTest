#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int cnt = 0;
    if(num == 1){return 0;}
    while(num != 1){
        num%2 == 0 ? num = num/2 : num = num*3 + 1;
        cnt += 1;

        if(num > 2147483647 || num < 0){
            return -1;
        }
    }
    if(cnt == 500){
            return -1;
        }
    
    return cnt;
}