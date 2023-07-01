#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pP = 0;
    int yY = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'y' || s[i] == 'Y'){
            yY += 1;
        }
        else if(s[i] == 'P' || s[i] =='p'){
            pP += 1;
        }
    }
    
    yY == pP ? answer = true : answer = false;


    return answer;
}