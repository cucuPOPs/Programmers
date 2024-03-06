// 1012번: 유기농 배추
#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> m >> n >> k; // m,n순서 주의.

        int board[51][51];
        bool visit[51][51];
        for (int i = 0; i < 51; i++)
        {
            for (int j = 0; j < 51; j++)
            {
                board[i][j] = 0;
                visit[i][j] = false;
            }
        }

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            board[y][x] = 1; // x,y순서 주의.
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visit[i][j] || board[i][j] < 1) continue;
                cnt++;
                queue<pair<int, int>> Q;
                visit[i][j] = true;
                Q.push({i, j});

                while (!Q.empty())
                {
                    auto cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (visit[nx][ny] || board[nx][ny] == 0) continue;

                        visit[nx][ny] = true;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}

// 1926번: 그림문제와 유사.