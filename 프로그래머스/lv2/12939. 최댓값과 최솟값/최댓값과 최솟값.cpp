#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> tmp;
    string ctos;
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != ' ') ctos += s[i];
        else{
            tmp.push_back(stoi(ctos));
            ctos = "";
        }
    }
    tmp.push_back(stoi(ctos));

    sort(tmp.begin(), tmp.end());
    answer += to_string(tmp[0]);
    answer += ' ';
    answer += to_string(tmp[tmp.size()-1]);
    return answer;
}