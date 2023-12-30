#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int max = 0;
    
    vector<int>::iterator i, j;
    for(i = numbers.begin(); i != numbers.end(); i++){
        for(j = i+1; j != numbers.end(); j++){
            if((*i)*(*j) > max) max = (*i)*(*j);
        }
    }
    return max;
}