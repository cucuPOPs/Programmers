// 11726번: 2*n 타일링
#include <bits/stdc++.h>
using namespace std;
int n;
int d[10002];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    d[1] = 1;
    d[2] = 2;

    for (int i = 3; i <= n; i++)
        d[i] = (d[i - 1] + d[i - 2]) % 10007;

    cout << d[n];
}

//문제설명: 1x2,2x1타일로 2xn크기를 채우는 방법의수.
//D[i]=2xi 크기의 직사각형을 채우는 방법의 수.
//D[i]=D[i-1]+D[i-2]