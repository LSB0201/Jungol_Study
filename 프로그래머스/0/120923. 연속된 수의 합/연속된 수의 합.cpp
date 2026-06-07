#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int rem = 0, n;
    
    for (int i = 1; i <= num; ++i)
    {
        rem += i;
        answer.push_back(i);
    }
    
    n = (total - rem) / num;
    
    for (int i = 0; i < num; ++i)
    {
        answer[i] += n;
    }
    
    return answer;
}