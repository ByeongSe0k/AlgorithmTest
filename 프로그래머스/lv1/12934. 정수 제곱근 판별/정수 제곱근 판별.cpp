#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    for(long long tempAnswer = 0; tempAnswer <= sqrt(n); tempAnswer++){
        if (tempAnswer*tempAnswer == n){
            return (tempAnswer + 1)*(tempAnswer + 1);
        }
    }
    return answer;
}