#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int x0 = x;
    for(int i = 0; i < n; i++){
        x = x0*(i+1);
        answer.push_back(x);
    }
    return answer;
}