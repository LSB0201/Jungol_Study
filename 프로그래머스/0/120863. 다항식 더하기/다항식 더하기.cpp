#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string token;
    
    int x_count = 0;     // x항의 계수
    int const_count = 0; // 상수항
    
    while (ss >> token)
    {
        if (token == "+") continue;
        
        if (token.back() == 'x') // x항인 경우
        {
            if (token.length() > 1)
            {
                // 계수 추출
                x_count += stoi(token.substr(0, token.length() - 1));
            }
            else
            {
                x_count += 1;
            }
        } 
        else // 상수항인 경우
        {
            const_count += stoi(token);
        }
    }
    
    if (x_count > 0) // answer에 x항 저장
    {
        if (x_count == 1)
            answer += "x";
        else
            answer += to_string(x_count) + "x";
    }
    
    if (const_count > 0) // answer에 상수항 저장
    {
        if (!answer.empty()) // 앞에 x항이 있다면 '+' 추가
            answer += " + ";
        
        answer += to_string(const_count);
    }
    
    return answer;
}