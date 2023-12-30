#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    vector<int>::iterator i;
    int p1[5] = {1,2,3,4,5};
    int p2[8] = {2,1,2,3,2,4,2,5};
    int p3[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int cntP1 = 0;
    int cntP2 = 0;
    int cntP3 = 0;
    int iP1 = 0;
    int iP2 = 0;
    int iP3 = 0;
    
    for(i = answers.begin(); i != answers.end(); i++){
        
        if((*i) == p1[iP1]) cntP1++;
        if((*i) == p2[iP2]) cntP2++;
        if((*i) == p3[iP3]) cntP3++;
        
        iP1++;
        iP2++;
        iP3++;
        
        if(iP1 == 5) iP1 = 0;
        if(iP2 == 8) iP2 = 0;
        if(iP3 == 10) iP3 = 0;
        
    }
    int tmp[3] = {cntP1, cntP2, cntP3};
    
    
    int max = 0;
    
    for(int j = 0; j < 3; j++){
        if(tmp[j] > max) max = tmp[j];
    }
    
    vector<int> answer;
    
    for(int j = 0; j < 3; j++){
        if(tmp[j] == max) answer.push_back(j+1);
    }
   
    
    return answer;
}