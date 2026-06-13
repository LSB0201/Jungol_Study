#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int i = slice;
    while(i - n < 0)
    {
        i += slice;
    }
    return i / slice;
}