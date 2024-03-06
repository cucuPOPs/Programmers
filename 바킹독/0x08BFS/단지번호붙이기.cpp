// 2667번: 단지번호붙이기
#include <bits/stdc++.h>
using namespace std;
char board[30][30];
bool vis[30][30];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> Q;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (board[i][j] - '0' == 0) continue;
            if (vis[i][j]) continue;
            vis[i][j] = true;
            Q.push({i, j});
            int area = 1;
            while (!Q.empty())
            {
                auto cur = Q.front();
                Q.pop();

                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= t || ny < 0 || ny >= t) continue;
                    if (vis[nx][ny]) continue;
                    if (board[nx][ny] - '0' == 0) continue;
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
    for (auto i : v)
    {
        cout << i << '\n';
    }
}
