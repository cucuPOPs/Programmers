// 더맵게
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K)
{
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    int cnt = 0;
    while (pq.size() > 1 && pq.top() < K)
    {

        cnt++;
        auto t1 = pq.top();
        pq.pop();
        auto t2 = pq.top();
        pq.pop();

        pq.push(t1 + t2 * 2);
    }

    if (pq.top() < K)
        return -1;
    else
        return cnt;
}