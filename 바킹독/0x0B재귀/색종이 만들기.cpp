// 2630번: 색종이 만들기
#include <bits/stdc++.h>
using namespace std;
int paper[128][128];
int cnt[2];

bool check(int x, int y, int n)
{
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (paper[x][y] != paper[i][j])
                return false;
    return true;
}

void solve(int x, int y, int n)
{
    if (check(x, y, n))
    {
        cnt[paper[x][y]]++;
        return;
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            solve(x + i * n / 2, y + j * n / 2, n / 2);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paper[i][j];

    solve(0, 0, n);
    for (int i = 0; i < 2; i++)
        cout << cnt[i] << '\n';
}

// 1780번과 유사.
