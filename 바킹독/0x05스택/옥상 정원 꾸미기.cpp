// 6198번: 옥상 정원 꾸미기
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	long long sum = 0;
	stack<int> s;
	while (n--)
	{
		int height;
		cin >> height;

		while (!s.empty())
		{
			if (s.top() <= height)
			{
				s.pop();
			}
			else break;
		}
		sum += s.size();

		s.push(height);
	}
	cout << sum;
}

/*
* sum변수의 overflow가능성->int 에서, long long으로.
*/