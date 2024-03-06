// 10026번: 적록색약
#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char board[101][101];
bool visit[101][101];
int n;

int GetAreaCount()
{
    int area = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (visit[i][j]) continue;
            area++;
            queue<pair<int, int>> Q;
            visit[i][j] = true;
            Q.push({i, j});

            while (!Q.empty())
            {
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (visit[nx][ny] || board[nx][ny] != board[cur.first][cur.second]) continue;
                    visit[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
        }
    return area;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int cnt = GetAreaCount();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'G')
                board[i][j] = 'R';
        }
    }

    for (int i = 0; i < n; i++)
        std::fill(visit[i], visit[i] + n, false);

    int cnt2 = GetAreaCount();

    cout << cnt << ' ' << cnt2;
}
