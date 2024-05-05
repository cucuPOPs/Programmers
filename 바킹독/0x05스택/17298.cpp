// 17298번: 오큰수
//문제해석: 오큰수를 구하라.

#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int nge[1000000];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];


	stack<int> s;
	for (int i = n - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= a[i])
			s.pop();
		
		nge[i] = s.empty() ? -1 : s.top();

		s.push(a[i]);
	}


	for (int i = 0; i < n; i++)	cout << nge[i] << ' ';
}