#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;

    for(int i = 0; i <= s.size(); i++){
        switch(s[i]){
            case 'z':
                answer *= 10;
                answer += 0;
                i += 3;
                break;
            case 'o':
                answer *= 10;
                answer += 1;
                i += 2;
                break;
            case 't':
                if(s[i+1] == 'w'){
                    answer *= 10;
                    answer += 2;
                    i += 2;
                    break;
                }
                else{
                    answer *= 10;
                    answer += 3;
                    i += 4;
                    break;
                }
            case 'f':
                if(s[i+1] == 'o'){
                    answer *= 10;
                    answer += 4;
                    i += 3;
                    break;
                }
                else{
                    answer *= 10;
                    answer += 5;
                    i += 3;
                    break;
                }
            case 's':
                if(s[i+1] == 'i'){
                    answer *= 10;
                    answer += 6;
                    i += 2;
                    break;
                }
                else{
                    answer *= 10;
                    answer += 7;
                    i+= 4;
                    break;
                }
            case 'e':
                answer *= 10;
                answer += 8;
                i += 4;
                break;
            case 'n':
                answer *= 10;
                answer += 9;
                i += 3;
                break;
        }
        if(s[i] >47 && s[i] < 58){
            if(i == 0){
                answer += s[i] - '0';
            }
            else{
                answer *= 10;
                answer += s[i] - '0';
            }
        }
    }
  
    return answer;
}