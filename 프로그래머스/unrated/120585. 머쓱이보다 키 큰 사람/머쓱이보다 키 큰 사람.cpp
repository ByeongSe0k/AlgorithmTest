#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    vector<int>::iterator i;
    for(i = array.begin(); i!= array.end(); i++){
        if(*i > height) answer++;
    }
    return answer;
}