#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    vector<string> s_vec;
    
    for (char c : my_string)
    {
        if (c < 'A')
        {
            temp += c;
        }
        else if (temp != "")
        {
            s_vec.push_back(temp);
            temp = "";
        }
    }
    
    if (temp != "")
    {
        s_vec.push_back(temp);
    }
    
    for (string s : s_vec)
    {
        answer += stoi(s);
    }
    
    return answer;
}