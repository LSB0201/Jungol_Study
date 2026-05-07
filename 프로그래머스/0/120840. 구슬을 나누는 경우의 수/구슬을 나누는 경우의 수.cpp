#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    double fact_numer = 1;
    int denom = 1;
    
    for (int i = ++share; i <= balls; i++)
    {
        fact_numer = (fact_numer * i) / denom;
        denom++;
    }

    return (int)fact_numer;
}