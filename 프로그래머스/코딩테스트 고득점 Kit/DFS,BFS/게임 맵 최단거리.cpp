// 게임 맵 최단거리
#include <bits/stdc++.h>
using namespace std;
int dist[102][102];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int, int>> Q;
    dist[0][0] = 1;
    Q.push({0, 0});
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (maps[nx][ny] == 0) continue;
            if (dist[nx][ny] > 0) continue;
            
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    if (dist[n - 1][m - 1] == 0)
        return -1;
    else
        return dist[n - 1][m - 1];
}