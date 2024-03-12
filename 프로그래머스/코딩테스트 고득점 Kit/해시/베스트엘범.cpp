#include <bits/stdc++.h>
using namespace std;

//커스텀 비교기 우왕..
bool cmp(pair<int, int> v1, pair<int, int> v2)
{
    if (v1.first == v2.first) return v1.second < v2.second;
    // 재생횟수 같으면 고유번호 오름차순
    else
        return v1.first > v2.first;
    // 재생횟수 내림차순
}
bool cmp1(pair<string, int> v1, pair<string, int> v2)
{
    return v1.second > v2.second;
    // 장르 재생횟수 합 내림차순
}
vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    map<string, int> m2;                    // 장르별 재생횟수 총합.
    map<string, vector<pair<int, int>>> m1; // 장르,재생횟수,고유번호
    for (int i = 0; i < genres.size(); i++)
    {
        m2[genres[i]] += plays[i];
        m1[genres[i]].push_back({plays[i], i});
    }

    for (auto &x : m1)
    {
        sort(x.second.begin(), x.second.end(), cmp);
    }

    // value기준으로 정렬.(map을 vector로..우왕..)
    vector<pair<string, int>> v(m2.begin(), m2.end());
    sort(v.begin(), v.end(), cmp1);

    //장르순위에서 순회.
    for (auto x : v)
    {
        string genre = x.first;
        for (int j = 0; j < m1[genre].size() && j < 2; j++)
        {
            answer.push_back(m1[genre][j].second);//고유번호를 저장.
        }
    }
    return answer;
}
