#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    
    for (const vector<string> s_vec : db)
    {
        if (s_vec[0] == id_pw[0] && s_vec[1] == id_pw[1])
        {
            return "login";
        }
        else if (s_vec[0] == id_pw[0] && s_vec[1] != id_pw[1])
        {
            answer = "wrong pw";
            
        }
        else
        {
            if (answer != "wrong pw")
                answer = "fail";
        }
    }
    
    return answer;
}