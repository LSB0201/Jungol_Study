#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, bool> m_ward;
    
    for (char c : s)
    {
        if (m_ward.find(c) != m_ward.end())
        {
            m_ward[c] = false;
        }
        else
        {
            m_ward.emplace(c, true);
        }
    }
    
    for (const pair<const char, bool> p : m_ward)
    {
        if (p.second)
        {
            answer += p.first;
        }
    }
    
    return answer;
}