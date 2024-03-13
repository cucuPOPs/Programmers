// 2579번: 계단 오르기
#include <bits/stdc++.h>
using namespace std;

int s[302];
int n;
int d[302][3];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];

    if (n == 1)
    {
        cout << s[1];
        return 0;
    }

    d[1][1] = s[1];
    d[1][2] = 0;
    d[2][1] = s[2];
    d[2][2] = s[1] + s[2];

    for (int i = 3; i <= n; i++)
    {
        d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
        d[i][2] = d[i - 1][1] + s[i];
    }
    cout << max(d[n][1], d[n][2]);
}

//D[i]=i번째 계단까지 올라섰을때 점수합의 최대값
// 이 조건은, "연속된 세 개의 계단을 모두 밟아서는 안 된다."를 반영할수 없다.

//연속적으로 밟은 정보가 필요.

//D[i][j]= j는 연속으로 몇번째인가?
//D[i][1]= 이전스탭은 2칸전이다. max(D[i-2][1],D[i-2][2]) + S[i]
//D[i][2]=이전스탭은 연속1번째이다. D[i-1][1] + S[i]

//초기값을 정해보자.
//D[1][1]=S[1], D[1][2]=0
//D[2][1]=S[2],D[2][2]=S[1]+S[2]