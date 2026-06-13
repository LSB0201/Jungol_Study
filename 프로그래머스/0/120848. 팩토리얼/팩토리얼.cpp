#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int factorial = 1;
    int i;
    
    for (i = 1; factorial * i <= n; ++i)
    {
        factorial *= i;
    }
    return i - 1;
}