// 7562번: 나이트의 이동
#include <bits/stdc++.h>
using namespace std;
int dist[302][302];

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int t, n, curX, curY, desX, desY;

queue<pair<int, int>> Q;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            std::fill(dist[i], dist[i] + n, -1); // 방문해야할곳.

        cin >> curX >> curY;
        dist[curX][curY] = 0;
        Q.push({curX, curY});

        cin >> desX >> desY;
        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();

            for (int i = 0; i < 8; i++)
            {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if (dist[nx][ny] >= 0) continue;
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }
        }

        cout << dist[desX][desY] << '\n';
    }
}
