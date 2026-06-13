#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer;

    for (char ch : my_string)
    {
        answer.append(n, ch);
    }
    return answer;
}