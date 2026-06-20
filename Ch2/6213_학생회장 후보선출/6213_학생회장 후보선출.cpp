#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    // 조건에 맞는 후보들을 저장
    set<int> answers;

    // 수열을 돌며 길이 2 또는 길이 3인 구간에서 과반수가 되는 원소가 있는지 확인
    for (int i = 0; i < N; i++) {
        // 바로 이웃한 학생이 같은 후보를 지지하는 경우 (길이 2인 구간)
        if (i + 1 < N && h[i] == h[i + 1]) {
            answers.insert(h[i]);
        }
        // 한 칸 건너뛴 학생이 같은 후보를 지지하는 경우 (길이 3인 구간)
        if (i + 2 < N && h[i] == h[i + 2]) {
            answers.insert(h[i]);
        }
    }

    // 가능한 후보가 없는 경우
    if (answers.empty()) {
        cout << -1 << "\n";
    }
    else {
        // set의 원소들을 공백으로 구분하여 출력
        auto it = answers.begin();
        cout << *it;
        it++;
        for (; it != answers.end(); it++) {
            cout << " " << *it;
        }
        cout << "\n";
    }
}

int main() {
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