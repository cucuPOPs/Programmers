// 6198번: 옥상 정원 꾸미기

// 문제해석1: 오큰수까지 거리. 총합을 구하라.

// 문제해석2: 오른쪽으로 내려다볼수있는 빌딩개수는
// 왼쪽으로 올려다볼수있는 빌딩개수를 구하는것과 같다.
// 왼큰수들의 갯수를 구하라.

#include <bits/stdc++.h>
using namespace std;
long long sum;
stack<int> s;
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
		
		while (!s.empty() && s.top() <= h)
			s.pop();

		sum += s.size();

		s.push(h);
	}
	cout << sum;
}

/*
 * sum변수의 overflow가능성->int 에서, long long으로.
 */