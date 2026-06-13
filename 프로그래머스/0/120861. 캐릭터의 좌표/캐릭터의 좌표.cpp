#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    int w = board[0] / 2;
    int h = board[1] / 2;
    
    for (string str : keyinput)
    {
        if (str == "up" && answer[1] < h)
        {
            answer[1]++;
        }
        else if (str == "down" && answer[1] > -h)
        {
            answer[1]--;
        }
        else if (str == "left" && answer[0] > -w)
        {
            answer[0]--;
        }
        else if (str == "right" && answer[0] < w)
        {
            answer[0]++;
        }
    }
    
    return answer;
}