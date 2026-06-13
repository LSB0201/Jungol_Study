#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int num1, num2, result;
    char op, eq;
    
    for (const auto &str : quiz)
    {
        stringstream ss(str);
        ss >> num1 >> op >> num2 >> eq >> result;
        
        if (op == '+')
        {
            if (num1 + num2 == result)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        else
        {
            if (num1 - num2 == result)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
    }
    return answer;
}