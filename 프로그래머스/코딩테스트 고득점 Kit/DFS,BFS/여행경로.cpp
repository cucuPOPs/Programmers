// 여행경로
#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<string>> &tickets, vector<string> &path, vector<bool> &visited, string &current, int count)
{
    path.push_back(current);     // 현재 공항을 경로에 추가
    if (count == tickets.size()) // 모든 항공권을 사용했을 경우
        return true;

    for (int i = 0; i < tickets.size(); i++)
    {
        // 사용하지 않은 항공권 중 현재 공항에서 출발하는 항공권을 찾음
        if (!visited[i] && tickets[i][0] == current)
        {
            visited[i] = true;
            if (dfs(tickets, path, visited, tickets[i][1], count + 1)) // 다음 공항으로 이동
                return true;
            visited[i] = false; // 백트래킹
        }
    }

    path.pop_back(); // 경로에서 현재 공항을 제거
    return false;
}
vector<string> solution(vector<vector<string>> tickets)
{
    vector<string> path;
    vector<bool> visited(tickets.size(), false); // 항공권 사용 여부

    sort(tickets.begin(), tickets.end());

    string start = "ICN"; // 출발 공항은 항상 ICN
    dfs(tickets, path, visited, start, 0);

    return path;
}

// gpt 사용.