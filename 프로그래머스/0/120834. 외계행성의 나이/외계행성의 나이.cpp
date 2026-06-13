#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(int age) {
    string answer = "";
    stack<char> insert_age;
    
    do
    {
        insert_age.push('a' + age % 10);
        age /= 10;
        
    }
    while(age != 0);
    
    while(!insert_age.empty())
    {
        answer.push_back(insert_age.top());
        insert_age.pop();
    }
    
    return answer;
}