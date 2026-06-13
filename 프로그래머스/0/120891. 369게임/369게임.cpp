#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = to_string(order);
    
    for (const char &s : str)
    {
        if (s == '3' || s == '6' || s == '9')
            answer++;
    }
    
    return answer;
}