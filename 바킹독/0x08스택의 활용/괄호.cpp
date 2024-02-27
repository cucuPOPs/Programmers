// 9012번: 괄호
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

// for문에서 끝까지 순회하지않고, 가지치기도 가능함.
/*
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
	string a;
	cin >> a;
	stack<char> s;
	bool is_valid = true;
	for (auto c : a) {
	  if (c == '(')
		s.push(c);
	  else { // c == ')'
		if (s.empty() || s.top() != '(') {
		  is_valid = false;
		  break;
		}
		s.pop();
	  }
	}
	if (!s.empty()) is_valid = false;

	if (is_valid) cout << "YES\n";
	else cout << "NO\n";
  }
}

*/