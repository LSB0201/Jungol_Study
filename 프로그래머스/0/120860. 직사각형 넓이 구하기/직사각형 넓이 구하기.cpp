#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int w = 0, h = 0;
    
    for (int i = 1; i < 3; ++i)
    {
        w = std::max(w, abs(dots[i][0] - dots[0][0]));
        h = std::max(h, abs(dots[i][1] - dots[0][1]));
    }
                    
    
    
    
    return w * h;
}