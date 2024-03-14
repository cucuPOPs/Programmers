// 1463번: 1로 만들기
#include <bits/stdc++.h>
using namespace std;
int d[1000002];
int n;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    d[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
        if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
    }
    cout << d[n];
}
/*문제요약
주어진 정수 X에 대해, 다음규칙으로 1을 만드는데, 최소 연산횟수.
1. %3==0, /3
2. %2==0, /2
3. -1.
*/