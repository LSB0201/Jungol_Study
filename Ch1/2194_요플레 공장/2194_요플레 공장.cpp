#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, S;
    if (!(cin >> N >> S)) return 0;

    long long total_cost = 0;
    int min_milk_price = 99999999; // 현재까지 가장 저렴한 우유 가격 저장

    for (int i = 0; i < N; ++i) {
        int c, y;
        cin >> c >> y;

        // 이전 주차 최저가에 보관비(S)를 더한 값 vs 이번 주 새 우유 가격(C) 중 싼 것 선택
        if (i > 0) {
            min_milk_price = min(min_milk_price + S, c);
        }
        else {
            min_milk_price = c; // 첫 주차 가격 대입
        }

        // 가장 저렴한 가격으로 이번 주 필요한 우유(y) 구매
        total_cost += (long long)min_milk_price * y;
    }

    cout << total_cost << endl;
    return 0;
}