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
		int h;
		cin >> h;

		// h이상이면 모두제거..
		while (!s.empty() && s.top() <= h)
			s.pop();
		s.push(h);

		sum += s.size() - 1;
	}
	cout << sum;
}

/*
 * sum변수의 overflow가능성->int 에서, long long으로.
 */