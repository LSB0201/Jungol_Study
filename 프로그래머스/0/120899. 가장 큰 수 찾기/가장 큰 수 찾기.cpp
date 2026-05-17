#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> i_vec(array);
    
    sort(i_vec.begin(), i_vec.end());
    
    int indax = find(array.begin(), array.end(), i_vec.back()) - array.begin();
    
    answer.push_back(i_vec.back());
    answer.push_back(indax);
    
    return answer;
}