#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 2진수 -> 10진수 변환 함수
int binToDec(string str)
{
    int i_index = str.length() - 1;
    int i_sum = 0;
    
    for (char c : str)
    {
        if (c == '1')
            i_sum += 1 << i_index--;
        else
            i_index--;
    }
    
    return i_sum;
}

// 10진수 -> 2진수 변환 함수
string decToBin (int num)
{
    string s_result = "";
    
    if (num == 0)
    {
        return "0";
    }
    else
    {
        while (num > 0)
        {
            if (num % 2 != 0)
               s_result += to_string(1);
            else
              s_result += to_string(0);
            num /= 2;
        }
    
        reverse(s_result.begin(), s_result.end()); 
    
        return s_result;
    }
}

string solution(string bin1, string bin2) {
    int i_result = 0;
    
    i_result = binToDec(bin1);
    i_result += binToDec(bin2);
    
    return decToBin(i_result);
}