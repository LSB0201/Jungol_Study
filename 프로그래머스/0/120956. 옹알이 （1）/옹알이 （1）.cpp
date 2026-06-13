#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> c_firstLetter = {"aya", "ye", "woo", "ma"};
    
    for (string s1 : babbling) // babbling 요소 하나씩 가져오기
    {
        vector<int> i_index;
        
        for (string s2 : c_firstLetter) // 발음 하나씩 가져오기
        {
            while (s1.find(s2) != string::npos) // 발음 찾기
            {
                // 찾은 발음을 공백으로 치환
                s1.replace(s1.find(s2), s2.length(), " "); 
            }
        }
        
        bool flag = true;
        for (char c : s1)
        {
            if (c != ' ')
            {
                flag = false;
                break;
            }
        }
        
        if (flag) answer++;
    }
    
    return answer;
}