#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers.size());
    int index = 0;
    
    if (direction == "right")
    {
        for (int i = 1; i <= numbers.size(); i++)
        {
            answer[i % numbers.size()] = numbers[index++];
        }
    }
    else
    {
        for (int i = 1; i <= numbers.size(); i++)
        {
            answer[index++] = numbers[i % numbers.size()];
        }
    }
    
    return answer;
}