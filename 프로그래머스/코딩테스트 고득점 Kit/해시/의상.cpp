#include <bits/stdc++.h>
using namespace std;
int solution(vector<vector<string>> clothes)
{
    unordered_map<string, int> map;
    for (int i = 0; i < clothes.size(); i++)
    {
        map[clothes[i][1]]++;
    }

    int answer = 1;
    for (auto e : map)
    {
        answer *= map[e.first] + 1;
    }
    return --answer;
}