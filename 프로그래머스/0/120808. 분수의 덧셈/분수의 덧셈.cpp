#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {

    int sum_nu = 0, de = 0;
    int result_gcd = 0;

    numer1 *= denom2;
    numer2 *= denom1;
    de = denom1 * denom2;
    
    sum_nu = numer1 + numer2;

    result_gcd = gcd(sum_nu, de);

    vector<int> answer = { sum_nu / result_gcd, de / result_gcd };

    return answer;
}