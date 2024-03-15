// 1026번: 보물
#include <bits/stdc++.h>
using namespace std;
int n;
int a[102], b[102];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum;
}

/*
문제요약.
S = a[0]*b[0] + a[1]*b[1] + ...a[n-1]*b[n-1]
S값을 가장작게 만들자. a배열은 재배열 가능하다.


풀이전략.
제일작은수에는 제일 큰수를 준다.
*/