﻿// 2164번: 카드2
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++) q.push(i);

	while (q.front() != q.back())
	{
		q.pop();
		if (q.front() == q.back()) break;
		q.push(q.front());
		q.pop();
	}

	cout << q.front();
}