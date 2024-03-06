// 2178번: 미로 탐색
#include <bits/stdc++.h>
using namespace std;
int dist[102][102];
int b[102][102];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int n, m;
struct Pos
{
    int X;
    int Y;
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            b[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist[i][j] = -1;
        }
    }

    queue<Pos> Q;
    Q.push({0, 0});
    dist[0][0] = 0;

    while (!Q.empty())
    {
        Pos cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (b[nx][ny] == 0) continue;
            if (dist[nx][ny] >= 0) continue; // 재방문 방지

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    cout << dist[n - 1][m - 1] + 1;
}

// dist값으로 방문여부를 판단가능.
// board값을 수정해나가는 방식은 디버깅이 어려우므로, dist배열을 두는것으로 하자.

// int b[102][102];를... 이렇게 가능.//string board[102]; //개굳.
