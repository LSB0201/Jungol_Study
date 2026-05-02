#include <iostream>

using namespace std;

void triangle(int n);

int main(void) {
    int n;
    cin >> n;
    
    triangle(n);
    
    return 0;
}

void triangle(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}