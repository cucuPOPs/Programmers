// 2493번: 탑
// 문제해석: 왼큰수의 위치를 출력하라.
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
stack<pair<int,int>> s;
int main()
{
	ios_base::sync_with_stdio(0);
  	cin.tie(0);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int h;
		cin >> h;
		while (!s.empty() && s.top().first <= h)
			s.pop();

		cout << (s.empty() ? -1 : s.top().Y) + 1 << " ";
		s.push({h, i});
	}
	return 0;
}