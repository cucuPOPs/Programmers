// 2504번: 괄호의 값
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	stack<int> stack;
	int sum = 0;
	int num = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			num *= 2;
			stack.push(str[i]);
		}
		else if (str[i] == '[')
		{
			num *= 3;
			stack.push(str[i]);
		}
		else if (str[i] == ')')
		{
			if (stack.empty() || stack.top() != '(')
			{
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '(') sum += num;
			stack.pop();
			num /= 2;
		}
		else if (str[i] == ']')
		{
			if (stack.empty() || stack.top() != '[')
			{
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '[') sum += num;
			stack.pop();
			num /= 3;
		}
	}
	if (stack.empty()) cout << sum;
	else cout << 0;
}

//쇠막대기 문제와 비슷.