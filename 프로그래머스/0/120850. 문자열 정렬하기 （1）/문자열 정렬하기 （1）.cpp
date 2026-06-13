#include <string>
#include <vector>
#include <cctype> // 문자 종류 판별, 대소문자 변환 기능
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (char c : my_string)
    {
        if (isdigit(c))
        {
            answer.push_back(c - '0');
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}