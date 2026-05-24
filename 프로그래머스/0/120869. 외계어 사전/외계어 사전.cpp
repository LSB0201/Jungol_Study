#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    for (string s_dic : dic)
    {
        bool flag = true;
        
        for (string s_sp : spell)
        {
            if (s_dic.find(s_sp) != string::npos)
                s_dic.erase(remove(s_dic.begin(), s_dic.end(), s_sp[0]), s_dic.end());
            else
            {
                flag = false;
                break;
            }
        }
        
        if (flag == true && s_dic.empty())
        {
            return 1;
        }
    }
    
    return 2;
}