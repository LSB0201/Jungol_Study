#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    map<int, int> m;
    
    for (int i : numlist)
    {
        m.emplace(n - i, i);
    }
    
    while (!m.empty())
    {
        int f = m.begin()->first;
        int b = m.rbegin()->first;
        
        if (abs(f) > abs(b))
        {
            answer.push_back(m.begin()->second);
            m.erase(f);
        }
        else if (abs(f) < abs(b))
        {
            answer.push_back(m.rbegin()->second);
            m.erase(b);
        }
        else 
        {
            answer.push_back(m.rbegin()->second);
            m.erase(b);
        }
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}