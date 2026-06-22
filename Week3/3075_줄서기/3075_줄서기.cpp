#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> fenwick;

// 펜윅 트리 업데이트 (카드가 사용 가능함을 표시)
void update(int idx, int val) {
    for (; idx <= N; idx += idx & -idx) {
        fenwick[idx] += val;
    }
}

// 1부터 idx까지 남아있는 카드의 개수 합 구하기
int query(int idx) {
    int sum = 0;
    for (; idx > 0; idx -= idx & -idx) {
        sum += fenwick[idx];
    }
    return sum;
}

// 남아있는 카드 중 k번째로 작은 카드의 번호를 이분 탐색(Binary Lifting)으로 검색
int find_kth(int k) {
    int idx = 0;
    for (int i = 1 << 20; i > 0; i >>= 1) {
        if (idx + i <= N && fenwick[idx + i] < k) {
            idx += i;
            k -= fenwick[idx];
        }
    }
    return idx + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N >> M)) return 0;

    vector<int> smaller_behind(N + 1, 0);
    vector<vector<int>> input_edges(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        input_edges[u].push_back(v);
        smaller_behind[u]++;
    }

    fenwick.assign(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        update(i, 1); // 1~N 카드 모두 사용 가능
    }

    vector<int> ans(N + 1, 0);

    // [핵심 수정 사항] 맨 앞(1번 학생)부터 순서대로 카드 번호를 결정합니다.
    for (int i = 1; i <= N; ++i) {
        int needed_rank = smaller_behind[i] + 1;

        if (query(N) < needed_rank) {
            cout << -1 << "\n";
            return 0;
        }

        int card_num = find_kth(needed_rank);
        ans[i] = card_num;
        update(card_num, -1); // 사용한 카드 제거
    }

    // 중복 명단 제거 및 모순 완벽 검증
    int unique_edges = 0;
    for (int u = 1; u <= N; ++u) {
        sort(input_edges[u].begin(), input_edges[u].end());
        auto last = unique(input_edges[u].begin(), input_edges[u].end());
        input_edges[u].erase(last, input_edges[u].end());
        unique_edges += input_edges[u].size();

        for (int v : input_edges[u]) {
            // 명단에 있는 v가 실제로 u보다 뒤에 있지 않거나, v의 카드가 u보다 크면 모순
            if (u >= v || ans[u] <= ans[v]) {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    // 제출된 명단의 총 순서쌍 개수가 실제 만들어진 조합과 맞지 않는 경우 모순
    if (unique_edges != M) {
        cout << -1 << "\n";
        return 0;
    }

    // 결과 출력
    for (int i = 1; i <= N; ++i) {
        cout << ans[i] << (i == N ? "" : " ");
    }
    cout << "\n";

    return 0;
}

// 손도 못댐 ㅠㅠ