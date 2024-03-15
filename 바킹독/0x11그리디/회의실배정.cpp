// 1931번: 회의실배정
#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> s[1000002];
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i].first >> s[i].second;
    sort(s, s + n, cmp);

    int cur = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cur > s[i].first) continue;
        cur = s[i].second;
        cnt++;
    }
    cout << cnt;
}

/*
문제요약
개념상 수강신청하는데, 최대학점 찾는것과 비슷.
회의는 시작시간, 끝나는시간이 있고, 겹치면 안됨.

특이점
시작시간과,끝시간이 같으면, 시작하자마자 끝나는것이다.

정렬
1차.끝나는시간이 빠른순으로 정렬.
2차.시작시간이 빠른순으로 정렬.
*/