// 17298번: 오큰수
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
		
		if (s.empty())
			nge[i] = -1;
		else
			nge[i] = s.top();

		s.push(a[i]);
	}


	for (int i = 0; i < n; i++)	cout << nge[i] << ' ';
}


/*
* 스택의 필요성은, 오른쪽에 있으면서 가장왼쪽에 있는 수.
* 만약, [1,2,3,4] -> [2,3,4,-1]이 되어야하기때문에, 스택이 필요.
*/