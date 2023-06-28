#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    int last = 0;
    vector<int> answer;
    for (int i = 0; i < num_list.size(); i++){
        answer.push_back(num_list[i]);
    }
    last = num_list.back();
    num_list.pop_back();
    if (last > num_list.back()){
        answer.push_back(last - num_list.back());
    }
    else{answer.push_back(last*2);}
    return answer;
}