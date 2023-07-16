#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            tmp += s[i];
        }
        else if(i == s.size())break;
        // else if(s[i] ==' ' && s[i+1] == ' '){
        //     answer += ' ';
        //     continue;
        // }
        else if(s[i] == ' '){
            if(tmp.size() < 2){
                transform(tmp.begin(), tmp.begin()+1, tmp.begin(), ::toupper);
                answer += tmp;
                answer += ' ';
                tmp = "";
                }
            else if(tmp.size() == 0) answer += ' ';
            else{
                transform(tmp.begin()+1, tmp.end(), tmp.begin()+1, ::tolower);
                transform(tmp.begin(), tmp.begin()+1, tmp.begin(), ::toupper);
                answer += tmp;
                answer += ' ';
                tmp = "";
                    }
        }
        
    }
    if(tmp.size() != 0){
        transform(tmp.begin()+1, tmp.end(), tmp.begin()+1, ::tolower);
        transform(tmp.begin(), tmp.begin()+1, tmp.begin(), ::toupper);
        answer += tmp;}
   
    return answer;
}