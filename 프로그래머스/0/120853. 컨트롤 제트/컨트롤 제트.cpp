#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    stack<int> add_num;
    string str;
    
    while (ss >> str)
    {
        if (str != "Z")
        {
            add_num.push(stoi(str));
        }
        else
        {
            add_num.pop();
        }
    }
    while (!add_num.empty())
    {
        answer += add_num.top();
        add_num.pop();
    }
    
    return answer;
}