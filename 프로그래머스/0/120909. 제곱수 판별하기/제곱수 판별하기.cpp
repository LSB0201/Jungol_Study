#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 1;
    double d_num = sqrt(n);
    
    if (d_num - (int)d_num != 0)
    {
        answer++;
    }
    
    return answer;
}