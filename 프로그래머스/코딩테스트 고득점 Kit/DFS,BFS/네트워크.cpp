// 네트워크
#include <bits/stdc++.h>
using namespace std;
bool vis[202];
int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;

    queue<int> Q;

    for (int i = 0; i < n; i++)
    {
        if (vis[i]) continue;

        for (int j = 0; j < n; j++)
        {
            if (!vis[j] && computers[i][j] == 1)
            {
                vis[j] = true;
                Q.push(j);
            }
        }

        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();
            for (int j = 0; j < n; j++)
            {
                if (!vis[j] && computers[cur][j] == 1)
                {
                    vis[j] = true;
                    Q.push(j);
                }
            }
        }
        answer++;
    }

    return answer;
}