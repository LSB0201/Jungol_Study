#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size() / n, vector<int>(n));
    int index = 0;
   
    for (int i = 0; i < num_list.size() / n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            answer[i][j] = num_list[index++];
        }
    }
    
    return answer;
}