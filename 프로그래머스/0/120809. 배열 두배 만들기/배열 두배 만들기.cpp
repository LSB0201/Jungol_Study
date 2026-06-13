#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(size(numbers));
    int i = 0;
    for (int num : numbers)
    {
        answer[i++] = num * 2;
    }
    return answer;
}