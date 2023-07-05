#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int maxDivisor = 0;
    for(int i = 1; i <= n; i++){
        if((n % i == 0) && (m % i == 0)){
            maxDivisor = i;
        }
    }
    answer.push_back(maxDivisor);
    
    if(maxDivisor == 1){
        answer.push_back(n*m);
    }
    else{answer.push_back(m*n / maxDivisor);}
    return answer;
}