// 2583번: 영역 구하기
#include <bits/stdc++.h>
using namespace std;
int board[102][102];
bool vis[102][102];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> m >> n;

    int k;
    cin >> k;

    while (k--)
    {
        int x, y;
        cin >> x >> y;
        int xx, yy;
        cin >> xx >> yy;

        for (int i = x; i < xx; i++)
        {
            for (int j = y; j < yy; j++)
            {
                board[i][j] = 1;
            }
        }
    }

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 1) continue;
            if (vis[i][j]) continue;
            queue<pair<int, int>> Q;
            vis[i][j] = true;
            Q.push({i, j});
            int area = 1;
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();

                for (int z = 0; z < 4; z++)
                {
                    int nx = cur.first + dx[z];
                    int ny = cur.second + dy[z];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (vis[nx][ny] || board[nx][ny] == 1) continue;
                    vis[nx][ny] = true;
                    Q.push({nx, ny});
                    area++;
                }
            }
            v.push_back(area);
        }
    }
    std::sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
}
