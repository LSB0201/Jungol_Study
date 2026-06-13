#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0]; // 첫 번재 인자 입력
    int min_abs = abs(array[0] - n); // 첫 번째 절대값
    
    for (int i = 1; i < array.size(); ++i)
    {
        int temp = abs(array[i] - n);
                          
        if (min_abs > temp) // 절댓값 크기 비교, 절댓값이 작다면?
        {
            min_abs = temp; // 절댓값 저장
            answer = array[i]; // 가까운 수 저장    
        }
        else if (min_abs == temp)
        {
            for(int j = 0; j < i; j++)
            {
                answer = (array[i] < array[j]) ? array[i] : array[j];
            }
        }

    }
    return answer;
}