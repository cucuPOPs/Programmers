// 10799번: 쇠막대기
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int count = 0;
	int floor = 0;
	int len = (int)str.size();
	for (int i = 0; i < len; ++i)
	{
		if (str[i] == '(') ++floor;
		else
		{
			--floor;
			if (str[i - 1] == '(') count += floor;
			else count++;
		}
	}
	cout << count;
}