#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string str, answer = "";
    stringstream ss(letter);
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    while (ss >> str)
    {
        for (int i = 0; i < morse.size(); i++)
        {
            if (str == morse[i])
            {
                answer += 'a' + i;
                break;
            }
        }
    }
    
    return answer;
}