// 10845번: 큐
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue<int> q;

	while (n--)
	{
		string op;
		cin >> op;
		if (op == "push")
		{
			int t;
			cin >> t;
			q.push(t);
		}
		else if (op == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				int t = q.front();
				cout << t << '\n';
				q.pop();
			}
		}
		else if (op == "size")
		{
			cout << q.size() << '\n';
		}
		else if (op == "empty")
		{
			cout << (int)q.empty() << '\n';
		}
		else if (op == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
			}
		}
		else if (op == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.back() << '\n';
			}
		}
	}
}
