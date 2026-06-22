#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<int> v;
	string str = "";
	int num, start_index;
	int index = 0, result = 0;

	// 입력
	for (int i = 0; i < 2; ++i) {
		if (cin >> num) {
			v.push_back(num);
		}
	}
	cin >> str;

	// 햄버거를 먹을 수 있는 사람 수 구하기
	for (char c : str)
	{
		// 햄버거 skip
		if (c != 'P') {
			index++;
			continue;
		}

		// 찾을 수 있는 범위 설정
		start_index = index - v[1];
		if (start_index < 0) {
			start_index = 0;
		}

		int end_index = index + v[1];
		if (end_index > v[0] - 1) {
			end_index = v[0] - 1;
		}

		// 햄버거 찾기
		for (int i = start_index; i <= end_index; ++i) {
			if (str[i] == 'H') {
				result++;
				str[i] = ' ';
				break;
			}
		}

		index++;
	}
	cout << result << endl;

	return 0;
}