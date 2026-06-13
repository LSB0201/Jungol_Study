#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int number = num_list.size();
    int even_count = 0;
    
    for(int i : num_list)
    {
        if(i % 2 == 0)
            even_count++;
    }
    
    answer = {even_count, number - even_count};
    
    return answer;
}