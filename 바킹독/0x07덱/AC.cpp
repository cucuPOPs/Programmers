// 5430번: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{

		string op;
		cin >> op;

		int n;
		cin >> n;

		string arr;
		cin >> arr;

		deque<int> dq;
		bool rev = false;
		bool isWrong = false;

		int cur = 0;
		for (char ch : arr)
		{
			int value = ch - '0';
			if (0 <= value && value < 10)
			{
				cur = 10 * cur + value;
			}
			else if (cur != 0)
			{
				dq.push_back(cur);
				cur = 0;
			}
		}

		for (char c : op)
		{
			if (c == 'R')
				rev = !rev;
			else
			{
				if (dq.empty())
				{
					isWrong = true;
					break;
				}
				if (!rev)
					dq.pop_front();
				else
					dq.pop_back();
			}
		}

		if (isWrong)
			cout << "error\n";
		else
		{
			if (rev)
				reverse(dq.begin(), dq.end());

			cout << '[';
			for (int i = 0; i < dq.size(); i++)
			{
				cout << dq[i];
				if (i + 1 != dq.size())
					cout << ',';
			}
			cout << "]\n";
		}
	}
}

// 처음생각은 R연산을 최적화하기위해, 연속R연산을 줄이려고했는데,
// deque를 사용하니, 심플하게 해결.