#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(char a, char b);

string solution(string s) {
    if (s.size() < 1) return "";
    sort(s.begin(), s.end(), compare);

    return s;
}

bool compare(char a, char b) {

    if (a==b) return false;
    else return int(a) > int(b); 
}
