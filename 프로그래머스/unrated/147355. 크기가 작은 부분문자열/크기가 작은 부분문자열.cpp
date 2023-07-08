#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string tmp;
    int check = 0;
    
    for(int check = 0; check < t.size()-p.size()+1; check++){
        for(int i = 0; i < p.size(); i++){
            tmp +=t[check + i];
        }
        if(tmp <= p){
            answer++;
        }
        tmp.erase(tmp.begin(), tmp.end());
    }

    return answer;
}