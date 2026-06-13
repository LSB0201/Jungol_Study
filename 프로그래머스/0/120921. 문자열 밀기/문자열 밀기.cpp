#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    char first = A[0];
    string temp = B + B;
    
    if (temp.find(A) != string::npos)
        return temp.find(A);
    else
        return -1;
}