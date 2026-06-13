#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int n = str2.length();
    
    for (int i = n-1; i < str1.length(); ++i)
    {
        if (str1.substr(i - (n-1), n) == str2)
            return 1;
    }
    return 2;
}