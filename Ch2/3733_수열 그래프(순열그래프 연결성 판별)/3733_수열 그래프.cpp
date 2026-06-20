#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// N이 최대 2,000,000이므로 전역 배열로 선언하여 스택 오버플로우를 방지
int A[2000005];

int main() {
    // 입출력 속도 최적화 (이 문제에서 필수)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // 각 그룹의 원소들을 저장할 이중 벡터
    vector<vector<int>> all_groups;

    int max_val = 0;
    int start_idx = 1;

    // 1부터 N까지 탐색
    for (int i = 1; i <= N; i++) {

        // 최댓값 저장
        if (A[i] > max_val) {
            max_val = A[i];
        }

        // 현재까지의 최댓값이 현재 인덱스와 같다면 그룹화
        if (max_val == i) {
            vector<int> current_group;

            // start_idx부터 i까지
            for (int j = start_idx; j <= i; j++) {
                current_group.push_back(A[j]);
            }

            sort(current_group.begin(), current_group.end());

            // 전체 그룹 리스트에 추가
            all_groups.push_back(current_group);

            // 다음 그룹의 시작점 업데이트
            start_idx = i + 1;
        }
    }

    // 총 그룹 수 출력
    cout << all_groups.size() << "\n";

    // 각 그룹 정보 출력
    for (const auto& group : all_groups) {
        cout << group.size(); // 그룹의 개수 먼저 출력
        for (int val : group) {
            cout << " " << val;
        }
        cout << "\n";
    }

    return 0;
}