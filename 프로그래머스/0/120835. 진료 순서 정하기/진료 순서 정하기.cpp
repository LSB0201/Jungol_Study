#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<int> sort_vec = emergency;
    
    sort(sort_vec.rbegin(), sort_vec.rend());
    
    for(int i = 0; i < sort_vec.size(); i++)
    {
        for(int j = 0; j < emergency.size(); j++)
        {
            if (emergency[j] == sort_vec[i])
                answer[j] = i + 1;
        }
    }
    
    return answer;
}