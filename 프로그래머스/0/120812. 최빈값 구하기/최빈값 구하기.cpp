#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    int answer, max = 0;
map<int, int> count_preq;

for (int i : array)
{
	count_preq[i]++;
}

for (map<int, int> :: iterator i = count_preq.begin(); i != count_preq.end(); i++)
{
	if (max < i->second)
	{
		max = i->second;
		answer = i->first;
	}
	else if (max == i->second)
	{
		answer = -1;
	}
}

return answer;
}