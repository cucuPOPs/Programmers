// 1697번: 숨바꼭질
#include <bits/stdc++.h>
using namespace std;
int n, k;
int dist[100001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for (int i = 0; i < 100001; i++)
    {
        dist[i] = -1;
    }

    queue<int> Q;
    Q.push(n);
    dist[n] = 0;

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        for (int nx : {cur - 1, cur + 1, 2 * cur})
        {
            if (nx < 0 || nx > 100000) continue; // out range 방어.
            if (dist[nx] > -1) continue;         // 재방문 방어.
            dist[nx] = dist[cur] + 1;
            Q.push(nx);
        }
    }

    cout << dist[k];
}

// 신기한 for range문.