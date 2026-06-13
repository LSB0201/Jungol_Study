#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    int discount = 0;
    
    if(price >= 500000)
    {
        discount = price / 5;
        
        if (price % 5 != 0)
        {
            discount++;
        }
        answer = price - discount;
    }
    else if (500000 > price && price >= 300000)
    {
        discount = price / 10;
        
        if (price % 10 != 0)
        {
            discount++;
        }
        answer = price - discount;
    }
    else if ( 300000 > price && price >= 100000)
    {
        discount = price / 20;
        
        if (price % 20 != 0)
        {
            discount++;
        }
        answer = price - discount;
    }
    else
        answer = price;
    
    return (int)answer;
}