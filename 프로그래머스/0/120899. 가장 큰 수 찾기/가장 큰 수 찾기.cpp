#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> i_vec(array);
    
    sort(i_vec.begin(), i_vec.end());
    
    int index = find(array.begin(), array.end(), i_vec.back()) - array.begin();
    
    answer.push_back(i_vec.back());
    answer.push_back(index);
    
    return answer;
}

// 밑의 함수를 사용하면 O(N)으로 해결 가능
// <algorithm>, max_element(시작, 끝): 범위 내에서 가장 큰 값의 위치(반복자)를 반환
// <iterator>, distance(시작_반복자, 끝_반복자): 두 반복자(Iterator) 사이에 몇 개의 요소가 있는지(거리)를 계산