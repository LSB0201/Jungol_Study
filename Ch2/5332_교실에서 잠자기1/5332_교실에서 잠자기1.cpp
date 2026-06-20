#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> a(N);
    long long total_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    // 모든 숫자의 합이 0인 경우, 이미 모두 0으로 동일하므로 수정 횟수는 0
    if (total_sum == 0) {
        cout << 0 << "\n";
        return;
    }

    // 최종적으로 남을 원소의 개수 K를 N부터 1까지 역순으로 조사
    // K를 최대화해야 수정 횟수(N - K)가 최소화됨
    for (int K = N; K >= 1; K--) {
        // 전체 합이 K로 나누어떨어지지 않으면 똑같은 숫자로 K등분 불가능
        if (total_sum % K != 0) continue;

        long long target = total_sum / K; // 우리가 만들어야 하는 목표 숫자
        long long current_sum = 0;
        bool possible = true;

        // 앞에서부터 차례대로 더해가며 target을 만들 수 있는지 확인
        for (int i = 0; i < N; i++) {
            current_sum += a[i];

            if (current_sum == target) {
                current_sum = 0; // 한 블록 완성되었으므로 초기화
            }
            else if (current_sum > target) {
                possible = false; // 목표 숫자를 초과하면 이 K값으로는 분할 불가
                break;
            }
        }

        // 성공적으로 K개의 동일한 블록으로 쪼개졌다면 최소 변경 횟수 출력 후 종료
        if (possible) {
            cout << N - K << "\n";
            return;
        }
    }
}

int main() {
    // 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}