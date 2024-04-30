// 10828번: 스택
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	stack<int> s;
	while (n--)
	{
		string op;
		cin >> op;

		if (op == "push")
		{
			int t;
			cin >> t;
			s.push(t);
		}
		else if (op == "top")
		{
			if (s.empty()) cout << -1 << '\n';
			else
			{
				int top = s.top();
				cout << top << '\n';
			}
		}
		else if (op == "size")
		{
			cout << s.size() << '\n';
		}
		else if (op == "empty")
		{
			cout << (int)s.empty() << '\n';//비어있으면 1, 아니면 0.
		}
		else if (op == "pop")
		{
			if (s.empty()) cout << -1 << '\n';
			else
			{
				int top = s.top();
				cout << top << '\n';
				s.pop();
			}
		}
	}
}