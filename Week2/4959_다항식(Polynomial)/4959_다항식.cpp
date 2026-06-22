#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    // 차수가 0부터 4까지이므로 크기 5의 배열 생성
    vector<int> poly(5, 0);

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        for (int j = 0; j < M; j++) {
            int coef, deg;
            cin >> coef >> deg;
            poly[deg] += coef; // 해당 차수에 계수 누적
        }
    }

    bool is_first = true; // 첫 번째로 출력되는 항인지 여부
    bool printed_anything = false; // 하나라도 출력했는지 여부

    // 최고차항(4)부터 상수항(0)까지 내림차순으로 탐색하며 출력
    for (int deg = 4; deg >= 0; deg--) {
        int coef = poly[deg];

        // 계수가 0인 항은 출력하지 않음
        if (coef == 0) continue;

        printed_anything = true;

        // 부호 출력 처리
        if (!is_first) {
            // 첫 항이 아니고 계수가 양수라면 '+'를 붙여줌
            if (coef > 0) cout << "+";
        }
        else {
            is_first = false;
        }

        // 계수 숫자 출력 처리
        if (deg == 0) {
            // 차수가 0(상수항)이면 숫자 그대로 출력 (1, -1 포함)
            cout << coef;
        }
        else {
            // 차수가 1 이상일 때 계수가 1이거나 -1이면 숫자 '1'은 생략
            if (coef == 1) { }
            else if (coef == -1) {
                cout << "-";
            }
            else {
                cout << coef;
            }
        }

        // 3. 문자 및 지수 출력 처리
        if (deg > 0) {
            cout << "X^" << deg;
        }
    }

    // 모든 항의 계수가 0일때
    if (!printed_anything) {
        cout << 0;
    }
    cout << "\n";

    return 0;
}