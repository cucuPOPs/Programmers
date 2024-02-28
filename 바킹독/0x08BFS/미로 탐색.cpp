// 2178번: 미로 탐색
#include <bits/stdc++.h>
using namespace std;
bool v[101][101];
int b[101][101];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < m; j++)
		{
			int t = s[j] - '0';
			b[i][j] = t;
		}
	}

	queue<pair<int, int>> Q;
	v[0][0] = true;
	Q.push({0, 0});

	while (!Q.empty())
	{
		pair<int, int> t = Q.front();
		Q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = t.first + dx[k];
			int ny = t.second + dy[k];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (b[nx][ny] == 0 || v[nx][ny])
				continue;
			v[nx][ny] = true;
			b[nx][ny] = b[t.first][t.second] + 1;
			Q.push({nx, ny});
		}
	}
	cout << b[n - 1][m - 1];
}