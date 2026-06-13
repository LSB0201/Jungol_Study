#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    /*
    double fact_numer = 1;
    int denom = 1;
    
    for (int i = ++share; i <= balls; i++)
    {
        fact_numer = (fact_numer * i) / denom;
        denom++;
    }

    return (int)fact_numer;
    */
    int bigger = (balls-share > share) ? balls-share : share;
    int smaller = (balls-share < share) ? balls-share : share;
    long long numerator = 1, denominator = 1;
    
    for (int i = bigger + 1; i <= balls; i++ )
    {
        numerator *= i;
        if (numerator % denominator == 0 && denominator <= smaller)
        {
           numerator = numerator / denominator++;
        }
    }

    return numerator;
}