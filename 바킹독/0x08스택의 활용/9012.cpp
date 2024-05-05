// 9012번: 괄호
// 문제해석: 올바른 괄호 문자열이면 "YES", 아니면 "NO"
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;

		stack<int> stack;
		for (auto c : str)
		{
			if (!stack.empty() && stack.top() == '(' && c == ')')
			{
				stack.pop();
			}
			else
			{
				stack.push(c);
			}
		}

		if (stack.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}