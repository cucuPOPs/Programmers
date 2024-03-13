// 프로세스
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location)
{
    vector<int> v;
    queue<pair<int, int>> q;
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({priorities[i], i});
        v.push_back(priorities[i]);
    }

    sort(v.begin(), v.end());

    int result = 0;
    while (!q.empty())
    {
        auto cur = q.front();
        if (cur.first != v.back())
        {
            q.pop();
            q.push(cur);
            continue;
        }

        q.pop();
        v.pop_back();
        if (cur.second == location)
        {
            result = priorities.size() - q.size();
            break;
        }
    }

    return result;
}
