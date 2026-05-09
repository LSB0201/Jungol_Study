#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    for (int i : box)
    {
        if(i < n)
            return 0;
        
        answer *= i / n;
    }
    
    return answer;
}