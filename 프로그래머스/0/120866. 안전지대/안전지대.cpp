#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    vector<vector<bool>> danger(n, vector<bool>(n, false));
    vector<int> dy = {-1, 1, 0, 0, -1, -1, 1, 1};
    vector<int> dx = {0, 0, -1, 1, -1, 1, -1, 1};
    
    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            if (board[y][x] == 1)
            {
                danger[y][x] = true;
                
                for (int i = 0; i < 8; ++i)
                {
                    int ny = y + dy[i];
                    int nx = x + dx[i];
                    
                    if (0 <= ny && ny < n && 0 <= nx && nx < n)
                        danger[ny][nx] = true;
                }    
            }
        }
    }
    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            if (danger[y][x] == false)
                answer++;
        }
    }
    
    return answer;
}