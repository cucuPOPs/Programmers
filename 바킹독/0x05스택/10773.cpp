// 10773번: 제로
// 문제요약: 0을외치면 pop.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	stack<int> s;
	while (n--)
	{
		int t;
		cin >> t;
		if (t == 0)
		{
			s.pop();
		}
		else 
		{
			s.push(t);
		}
	}

	int sum = 0;
	while (!s.empty())
	{
		sum+=s.top();
		s.pop();
	}

	cout << sum;
}