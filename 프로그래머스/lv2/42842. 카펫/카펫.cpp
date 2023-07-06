#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int totalNum = brown + yellow;
    int xMax = 0;
    int yMax = 0;
    
    for(int i = 3; i <= totalNum; i++){
        if(totalNum % i == 0){
            yMax = i;
            xMax = totalNum / yMax;
            if((xMax-2)*(yMax-2) == yellow){
                answer.push_back(xMax);
                answer.push_back(yMax);
                break;
            }
        }
        
    }

    return answer;
}