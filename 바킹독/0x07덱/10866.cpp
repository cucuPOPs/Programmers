﻿// 10866번: 덱
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int n;
	cin >> n;
	while (n--)
	{
		string op;
		cin >> op;
		if (op == "push_back")
		{
			int t;
			cin >> t;
			dq.push_back(t);
		}
		else if (op == "push_front")
		{
			int t;
			cin >> t;
			dq.push_front(t);
		}
		else if (op == "pop_front")
		{
			if (dq.empty()) cout << -1 << '\n';
			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (op == "pop_back")
		{
			if (dq.empty()) cout << -1 << '\n';
			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (op == "size")
			cout << dq.size() << '\n';
		else if (op == "empty")
			cout << dq.empty() << '\n';
		else if (op == "front")
		{
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.front() << '\n';
		}
		else if (op == "back")
		{
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.back() << '\n';
		}
	}
}