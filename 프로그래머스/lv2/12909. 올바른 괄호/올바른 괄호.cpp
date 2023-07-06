#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int openedCase = 0;
    int closedCase = 0;
    
    if(s[0] == ')' || s[s.size()] == '('){
        return false;
    }
    for(char c : s){
        if(c == '('){
            openedCase += 1;
        }
        else if(c == ')'){
            closedCase += 1;
        }
        if(openedCase < closedCase){
            return false;
        }
    }
    if(openedCase != closedCase){
        return false;
    }

    return answer;
}