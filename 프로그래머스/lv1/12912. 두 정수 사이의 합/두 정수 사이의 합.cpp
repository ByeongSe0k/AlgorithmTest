#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int max = a;
    int min = b;
    int tmp;
    if(max < min){
        tmp = max;
        max = min;
        min = tmp;
    }
    
    while(max >=min){
        answer += min;
        min += 1;
    }
    return answer;
}