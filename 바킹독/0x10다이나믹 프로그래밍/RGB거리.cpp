// 1149번: RGB거리
#include <bits/stdc++.h>
using namespace std;

int n;
int d[1002][3];
int r[1002], g[1002], b[1002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> r[i] >> g[i] >> b[i];

    d[1][0] = r[1];
    d[1][1] = g[1];
    d[1][2] = b[1];

    for (int i = 2; i <= n; i++)
    {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r[i];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g[i];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + b[i];
    }

    cout << *min_element(d[n], d[n] + 3);
}

// D[i]=i번째 집까지 칠했을때 최소값.
//=>이웃한집끼리 색이 달라야한다는 규칙을 고려할수없음.

// 색상정보가 들어가야함.

// D[i][0]=i번째 집까지 칠할때 비용최소값, 단i번째집은 Red.
// D[i][1]=i번째 집까지 칠할때 비용최소값, 단i번째집은 Green.
// D[i][2]=i번째 집까지 칠할때 비용최소값, 단i번째집은 Blue.

// 이제 점화식을 세워보자.

// D[k][0]=k번째 Red이니, k-1는 G,B.   min(D[k-1][1],D[k-1][2]) + R[k]
// D[k][1]=min(D[k-1][0],D[k-1][2]) + G[k]
// D[k][2]=min(D[k-1][1],D[k-1][2]) + B[k]

//이제 초기값을 정해보자.
// D[1][0]=R[1]
// D[1][1]=G[1]
// D[1][2]=B[1]
