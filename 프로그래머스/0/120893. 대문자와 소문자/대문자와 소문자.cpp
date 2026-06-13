#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (const char &c : my_string)
    {
        char ch;
        
        if (c >= 'a')
        {
            ch = c - 32;
            answer += ch;
        }
        else
        {
            ch = c + 32;
            answer += ch;
        }
    }
    return answer;
}