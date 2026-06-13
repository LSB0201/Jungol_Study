#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> count(201, 0); 
    
    for (vector<int> v : lines)
    {
        int start = v[0] + 100;
        int end = v[1] + 100;
        
        for (int i = start; i < end; ++i)
        {
            count[i]++;
        }
    }
    
    for (int c : count)
    {
        if (c >= 2)
        {
            answer++;
        }
    }
    
    return answer;
}