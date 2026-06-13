#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(const char &c : my_string)
    {
        if (answer.find(c) == string::npos)
        {
            answer.push_back(c);
        }
    }
    return answer;
}