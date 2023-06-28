#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    int i = start;
    while(i <= end){
        answer.push_back(i);
        i++;
    }
    return answer;
}