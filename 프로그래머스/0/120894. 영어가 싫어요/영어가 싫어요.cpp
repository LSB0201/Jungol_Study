#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    string word = "", str_num = "";
    vector<string> vs= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (char c : numbers)
    {
        word += c;
        for (int i = 0; i < vs.size(); ++i)
        {
            if ( vs[i] == word)
            {
                str_num += to_string(i);
                word = "";
                break;
            }
        }
        
    }
    
    return stoll(str_num);
}