// 7576번: 토마토
#include <bits/stdc++.h>
using namespace std;
int board[1002][1002];
int dist[1002][1002];
int n, m;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
struct Pos
{
    int X;
    int Y;
};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n; // 하..씨 헷갈리게

    queue<Pos> Q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i, j});
            if (board[i][j] == 0)
                dist[i][j] = -1; // 방문해야할곳.
        }
    }
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0) continue; // 재방문 방어.
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dist[i][j] == -1) // 방문해야할곳이 발견되면,
            {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
}

//입력...행,열로 받자.
