#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int i = 0;
    while(i < n){
        if(i % 2 == 0){
            answer += "수";
        }
        else if(i % 2 != 0){
            answer += "박";
        }
        i += 1;
    }
    return answer;
}