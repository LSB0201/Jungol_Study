#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int maximum = max(sides[0], sides[1]);
    int minimum = min(sides[0], sides[1]);
    
    for (int i = 1; i < minimum + maximum; ++i)
    {
        if (maximum - minimum < i)
        {
            answer++;
        }
    }
    
    return answer;
}