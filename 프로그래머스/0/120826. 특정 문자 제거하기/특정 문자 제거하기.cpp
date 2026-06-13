#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer;
    
    for (char i : my_string)
    {
        if (i != letter[0])
            answer += i;
    }
    return answer;
}