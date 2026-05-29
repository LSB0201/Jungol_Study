#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    int my_score = 0, o_score = 0;

    
    for (vector<int> my : score)
    {
        my_score = my[0] + my[1];
        int rank = 1;
        
        for (vector<int> other : score)
        {
            o_score = other[0] + other[1];
            
            if (my_score < o_score)
                rank++;
        }
        answer.push_back(rank);
    }
    
    return answer;
}