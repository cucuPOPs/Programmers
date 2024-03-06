// 4179번: 불!
#include <bits/stdc++.h>
using namespace std;
int board[1002][1002];
int fDist[1002][1002];
int jDist[1002][1002];
int r, c;
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

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            fDist[i][j] = -1;
            jDist[i][j] = -1;
        }
    }

    queue<Pos> jQ;
    queue<Pos> fQ;
    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < c; j++)
        {
            if (s[j] == '#')
            {
                board[i][j] = -1;
            }
            else if (s[j] == 'J')
            {
                jQ.push({i, j});
                jDist[i][j] = 0;
            }
            else if (s[j] == 'F')
            {
                fQ.push({i, j});
                fDist[i][j] = 0;
            }
        }
    }

    while (!fQ.empty())
    {
        auto cur = fQ.front();
        fQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (board[nx][ny] == -1) continue;
            if (fDist[nx][ny] >= 0) continue;
            fDist[nx][ny] = fDist[cur.X][cur.Y] + 1;
            fQ.push({nx, ny});
        }
    }

    while (!jQ.empty())
    {
        auto cur = jQ.front();
        jQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            {
                // 탈출.
                cout << jDist[cur.X][cur.Y] + 1;
                return 0;
            }
            if (board[nx][ny] == -1) continue; //
            if (jDist[nx][ny] >= 0) continue;  // 재방문 방어.

            //(불이 도달 불가능 || 불보다 지훈이가 먼저 도착) => 통과가능.
            if (fDist[nx][ny] > -1 && !(jDist[cur.X][cur.Y] + 1 < fDist[nx][ny])) continue;

            jDist[nx][ny] = jDist[cur.X][cur.Y] + 1;
            jQ.push({nx, ny});
        }
    }

    // 탈출실패.
    cout << "IMPOSSIBLE";
}

// 풀이전략.
// 불을 BFS돌려서, 각칸에 불이 전파되는 시간을 다 구해둔다.
// 지훈이 BFS돌려서, 지훈이가 도달한시간으로, 불보다 먼저왓는지 판단가능.
