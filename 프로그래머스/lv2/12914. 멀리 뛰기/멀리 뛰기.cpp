#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
        long long *answer = new long long[2001];
        answer[1] = 1;
        answer[2] = 2;

        for (int i = 3; i <= n; i++) {
            answer[i] = (answer[i - 1] + answer[i - 2]) % 1234567;
        }

        return answer[n];
        delete [] answer;
    }