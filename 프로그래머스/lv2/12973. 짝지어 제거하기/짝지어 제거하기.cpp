#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s){
    stack<char> strStack;

    for(auto chr:s){      
        if(strStack.size() > 0 && strStack.top() == chr){
            strStack.pop();
        }
        else{
            strStack.push(chr);
        }
    }
    if(strStack.empty()) return 1;
    else return 0;
}