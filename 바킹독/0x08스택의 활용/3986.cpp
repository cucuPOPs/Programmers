// 3986번: 좋은 단어
// 문제해석: AABB=> AA 제거. BB제거.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int count = 0;
	while (n--)
	{
		string str;
		cin >> str;

		stack<char> stack;
		int len = (int)str.size();
		for (int j = 0; j < len; j++)
		{
			if (!stack.empty() && stack.top() == str[j]) stack.pop();
			else stack.push(str[j]);
		}
		if (stack.empty()) count++;
	}
	cout << count;
}