#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    int minimum = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
        cout << minimum;
    }
    for(int j = 0; j < arr.size(); j++){
        if(arr[j] == minimum){
            arr.erase(arr.begin() + j);
        }
    }
    if(arr.size() == 0){
        arr.push_back(-1);
    }
    return arr;
}