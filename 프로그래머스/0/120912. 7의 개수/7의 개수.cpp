#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string str = "";
    
    
    for (int i = 0; i < array.size(); ++i)
    {
        str = to_string(array[i]);
        
        for (int j = 0; j < str.length(); ++j)
        {
            if (str[j] == '7')
                answer++;
        }
    }
    
    return answer;
}