#include <iostream>

using namespace std;

// 나눌 수 상수 정의
const long long MOD = 20091024;

// 분할 정복을 이용한 거듭제곱 함수
long long power(long long x, long long y) {
    // Base Case
    if (y == 0) return 1;

    // X^(Y/2)를 먼저 구합니다. (두 번 호출하지 않고 변수에 저장하여 최적화)
    long long half = power(x, y / 2);

    // 중간 계산 결과에 나머지 연산 적용
    long long half_square = (half * half) % MOD;

    // Y가 짝수인 경우
    if (y % 2 == 0) {
        return half_square;
    }
    // Y가 홀수인 경우 X를 한 번 더 곱해줌
    else {
        return (half_square * (x % MOD)) % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    if (cin >> X >> Y) {
        cout << power(X, Y) << "\n";
    }

    return 0;
}