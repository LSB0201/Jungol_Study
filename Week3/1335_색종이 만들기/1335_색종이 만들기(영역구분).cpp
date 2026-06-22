#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> paper;
int white_count = 0;
int blue_count = 0;

// 해당 영역이 모두 같은 색인지 확인하고 분할하는 함수
void check_and_divide(int r, int c, int size) {
    int color = paper[r][c];
    bool is_same = true;

    // 현재 영역 탐색
    for (int i = r; i < r + size; i++) {
        for (int j = c; j < c + size; j++) {
            if (paper[i][j] != color) {
                is_same = false;
                break;
            }
        }
        if (!is_same) break;
    }

    // 다른 색이 섞여 있다면 4등분 분할
    if (!is_same) {
        int next_size = size / 2;
        check_and_divide(r, c, next_size);                         // 왼쪽 위
        check_and_divide(r, c + next_size, next_size);             // 오른쪽 위
        check_and_divide(r + next_size, c, next_size);             // 왼쪽 아래
        check_and_divide(r + next_size, c + next_size, next_size); // 오른쪽 아래
    }
    // 모두 같은 색이라면 카운트 증가
    else {
        if (color == 0) white_count++;
        else blue_count++;
    }
}

int main() {
    // 빠른 입출력
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    paper.assign(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }

    // (0, 0)에서 시작, 초기 크기는 N
    check_and_divide(0, 0, N);

    cout << white_count << "\n" << blue_count << "\n";

    return 0;
}