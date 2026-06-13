#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0, free = 0;
    int coupon = chicken;
    
    while (coupon >= 10)
    {
        free =  coupon / 10;
        answer += free;
        
        coupon =  free + coupon % 10;
    }
    
    return answer;
}