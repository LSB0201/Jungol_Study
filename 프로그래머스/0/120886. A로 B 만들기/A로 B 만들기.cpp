#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    map<char, int> m1;
    map<char, int> m2;
    
    for (char c : before)
    {
        m1[c] += 1;
    }
    
    for (char c : after)
    {
        m2[c] += 1;
    }
    
    if (m1 == m2)
    {
        return 1;
    }
    
    return answer;
}