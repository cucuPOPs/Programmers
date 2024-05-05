// 1021번: 회전하는 큐
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	deque<int> DQ;
	for (int i = 1; i <= n; i++) DQ.push_back(i);
	int ans = 0;
	while (m--)
	{
		int t;
		cin >> t;
		int idx = find(DQ.begin(), DQ.end(), t) - DQ.begin(); // idx : t가 있는 위치
		while (DQ.front() != t)
		{
			//idx가 dq전체크기의 절반보다 앞에있을때.
			// if (idx < DQ.size()/2) 홀수짝수문제가 있으니, 곱하기로 변경.
			// if (2 * idx < DQ.size()) 2*idx는 int 오버플로우가능성있음.
			// if (idx < DQ.size() - idx) //uint - int 의 오버플로우가능성 0% 인지.
			if (idx < DQ.size() - idx)
			{
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else
			{
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			ans++;
		}
		DQ.pop_front();
	}
	cout << ans;
}