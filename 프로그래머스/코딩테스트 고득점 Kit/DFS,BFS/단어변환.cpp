// 단어변환
#include <bits/stdc++.h>
using namespace std;
int solution(string begin, string target, vector<string> words)
{
    queue<pair<string, int>> q;
    vector<bool> visited(words.size(), false);

    q.push({begin, 0});

    while (!q.empty())
    {
        auto cur = q.front().first;
        int step = q.front().second;
        q.pop();

        if (cur == target)
            return step;

        for (int i = 0; i < words.size(); i++)
        {
            if (visited[i]) continue;

            int diff = 0;
            for (int j = 0; j < cur.size(); j++)
            {
                if (cur[j] != words[i][j])
                    diff++;
            }

            if (diff == 1)
            {
                visited[i] = true;
                q.push({words[i], step + 1});
            }
        }
    }

    return 0;
}