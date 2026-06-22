#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 공유할 전역변수 선언
int N, M, S;
vector<int> current;


void solve(int depth, int current_sum) {
    // 항의 개수가 M 일 때 (Base Case)
    if (depth == M) {

        // 더한 값이 S 일 때
        if (current_sum == S) {
            for (int i = 0; i < M; i++)
            {
                cout << current[i];
                if (i != M - 1) cout << " ";
            }
            cout << endl;

        }
        return;
    }

    // 재귀로 1, ... , 1부터 N, ... , N까지 탐색 (Recursive Case)
    for (int i = 1; i <= N; i++) {
        current.push_back(i);
        solve(depth + 1, current_sum + i); 
        current.pop_back();
    }
}

int main() {
    // 입력
    if (!(cin >> N >> M >> S)) return 0;

    // 계산
    solve(0, 0);

    return 0;
}