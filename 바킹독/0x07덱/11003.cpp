// 11003번: 최솟값 찾기
// 문제해석: 본인포함해서 왼쪽으로 L개중에 최소값을 출력.
#include <bits/stdc++.h>
using namespace std;
struct Data
{
    int pos;   // 등장위치
    int value; // 값
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, L;
    deque<Data> dq;

    cin >> N >> L;

    for (int i = 0; i < N; ++i)
    {
        int temp;
        cin >> temp;

        while (!dq.empty() && dq.back().value >= temp)
        {
            dq.pop_back();
        }

        dq.push_back({i, temp});

        if (dq.front().pos <= i - L)
        {
            dq.pop_front();
        }

        cout << dq.front().value << " ";
    }

    return 0;
}