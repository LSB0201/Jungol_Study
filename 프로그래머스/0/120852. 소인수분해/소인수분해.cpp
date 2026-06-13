#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<bool> prime(n+1, true); // 값이 ture인 인덱스가 소수
    prime[0] = prime[1] = false;
    
    // 에라토스테네스의 체 사용
    for (int i = 2; i * i <= n; ++i)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= n; ++i)
    {
        if (prime[i] && (n % i == 0)) // i가 소수이자 n의 약수일 때
        {
            answer.push_back(i);
        }
    }
    
    return answer;
}