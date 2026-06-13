#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string s_n, s_k;
    
    s_k = to_string(k);
    
    for (int n = i; n <= j; ++n)
    {
        s_n = to_string(n);
        for (char c : s_n)
        {
            if (c == s_k[0])
            {
                answer++;
            }
        }
    }
    
    return answer;
}