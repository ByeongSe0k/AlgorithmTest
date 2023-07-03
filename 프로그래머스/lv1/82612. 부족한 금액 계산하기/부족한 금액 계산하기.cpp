using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = 0;
    for(int i = 1; i <= count; i++){
        totalPrice += price*i;
    }
    answer = 0 - (money - totalPrice);
    if(answer < 0){
        return 0;
    }
    

    return answer;
}