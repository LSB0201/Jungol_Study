#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    set<string> s_set;
    
    for (const string &str : s1)
    {
        s_set.insert(str);
    }
    
    for (const string &str : s2)
    {
        s_set.insert(str);
    }
    
    return s1.size() + s2.size() - s_set.size();
}