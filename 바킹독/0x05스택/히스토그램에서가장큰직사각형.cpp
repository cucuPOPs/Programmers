// 6549번: 히스토그램에서 가장 큰 직사각형
#include <bits/stdc++.h>
using namespace std;
struct Bar
{
	long long height;
	long long startIndex;
};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;

		stack<Bar> s;
		long long result = 0;
		for (int i = 0; i < n; i++)
		{
			int h;
			cin >> h;
			int idx = i;

			// 왼큰같수들을 pop한다. 스택은 오름차순이 된다.
			while (!s.empty() && s.top().height >= h)
			{
				result = max(result, (i - s.top().startIndex) * s.top().height);
				idx = s.top().startIndex;
				s.pop();
			}

			// 이때, top은 왼작수.

			s.push({h, idx});
		}

		while (!s.empty())
		{
			result = max(result, (n - s.top().startIndex) * s.top().height);
			s.pop();
		}
		cout << result << '\n';
	}
}

// stack<높이, 처음등장위치>