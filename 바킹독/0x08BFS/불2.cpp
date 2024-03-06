// 5427번: 불
#include <bits/stdc++.h>
using namespace std;
char board[1002][1002];
int distF[1002][1002];
int distS[1002][1002];

int tc;
int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> tc;
    while (tc--)
    {
        // 행,렬.
        cin >> m >> n;

        queue<pair<int, int>> qF;
        queue<pair<int, int>> qS;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> board[i][j];

                distF[i][j] = -1;
                distS[i][j] = -1;

                if (board[i][j] == '@')
                {
                    distS[i][j] = 0;
                    qS.push({i, j});
                }
                else if (board[i][j] == '*')
                {
                    distF[i][j] = 0;
                    qF.push({i, j});
                }
            }
        }

        // 불을 먼저 BFS돌린다.
        while (!qF.empty())
        {
            auto cur = qF.front();
            qF.pop();

            for (int i = 0; i < 4; i++)
            {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (distF[nx][ny] >= 0) continue;
                if (board[nx][ny] == '#') continue;
                distF[nx][ny] = distF[cur.first][cur.second] + 1;
                qF.push({nx, ny});
            }
        }

        bool isEsapce = false;
        while (!qS.empty() && !isEsapce)
        {
            auto cur = qS.front();
            qS.pop();

            for (int i = 0; i < 4; i++)
            {
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                {
                    isEsapce = true;
                    cout << (distS[cur.first][cur.second] + 1) << '\n';
                    break;
                }
                if (distS[nx][ny] >= 0) continue;
                if (board[nx][ny] == '#') continue;

                // distF[nx][ny] != -1.............
                if (distF[nx][ny] != -1 && distS[cur.first][cur.second] + 1 >= distF[nx][ny]) continue;
                distS[nx][ny] = distS[cur.first][cur.second] + 1;
                qS.push({nx, ny});
            }
        }
        if (!isEsapce) cout << "IMPOSSIBLE" << '\n';
    }
}
