// 11659번: 구간합구하기4
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100002], d[100002];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    d[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = d[i - 1] + a[i];
    }
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        cout << d[j] - d[i - 1] << '\n';
    }
}

/*
정의.
D[i] = A[1] + A[2] + ... + A[i].
점화식.
D[i] = D[i-1] + A[i]

A[i]+A[i+1]+ ... +A[j]
=(A[1]+ ...+A[j]) - (A[1]+ ... A[i-1])
= D[j] - D[i-1]

1-indexed를 사용한 이유: D[i-1]에서 D[-1]이 될수있어서.
*/