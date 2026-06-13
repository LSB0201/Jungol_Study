#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    
    if(angle - 90 < 0)
        return 1;
    
    else if (angle - 90 == 0)
        return 2;
    
    else if (0 < angle - 90 && angle - 90 < 90)
        return 3;
    
    return 4;
}