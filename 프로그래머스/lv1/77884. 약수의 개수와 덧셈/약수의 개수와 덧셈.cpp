#include <string>
#include <vector>

using namespace std;

int divisorCount(int i);

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++){
        if(divisorCount(i) % 2 == 0){
            answer += i;
        }
        else if(divisorCount(i) % 2 != 0){
            answer -= i;
        }
    }
    return answer;
}

int divisorCount(int num){
    int cnt = 0;
    for(int j = 1; j <= num; j++){
        if(num % j == 0){
            cnt += 1;
        }
    }
    return cnt;
}