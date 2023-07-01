#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    vector<long long> number;
    long long answer = 0;
    while(n > 10){
        number.push_back(n % 10);
        n = n / 10;
    }
    number.push_back(n);
    sort(number.begin(), number.end());
    for(int i = 0; i < number.size(); i++){
        answer += number[i]*pow(10,i);
    }
    
    return answer;
}