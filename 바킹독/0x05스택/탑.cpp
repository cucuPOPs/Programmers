// 2493번: 탑
// 문제: 왼큰수의 위치를 출력하라.
#include <bits/stdc++.h>
using namespace std;
stack<pair<int, int>> s;
int main()
{
	ios_base::sync_with_stdio(0);	
	cin.tie(0);
	//이걸해줘야 시간초과가 안남...이게뭐야...

	int n;
	cin >> n;

	s.push({ 100000001, 0 });

	for (int i = 1; i <= n; i++)
	{
		int t;
		cin >> t;
		while (s.top().first < t)
			s.pop();
		cout << s.top().second << " ";
		s.push({ t, i });
	}
}

/*
* 맨왼쪽에 제일높은 탑을 하나 둔다. -> 100000001.
* 인덱스를 저장하는방법 -> pair를 이용한다.
*/