#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> gram = {16, 8, 4, 2, 1};    // 추 무게
    vector<int> insert;                     // 추 개수
    int num, n, index = 4, total = 0;

    // 추 개수 입력
    for (int i = 0; i < 6; ++i) {
        if (cin >> num) {
            insert.push_back(num);
        }
    }

    // 측정할 무게 추출
    n = insert.back();
    insert.pop_back();
    

    // 무게 측정
    for (int weight : gram) {

        // 입력한 개수 만큼 추 사용
        for (int count = 1; count <= insert[index]; ++count) {

            // 남은 무게 < 추 무게 -> 루프 탈출
            if (n - weight < 0) {
                break;
            }

            n -= weight;
            total++;
        }

        if (n == 0) break;

        index--;
    }

    if (n == 0) {
        cout << total << endl;
    }
    else {
        cout << "impossible" << endl;
    }

    return 0;
}