// 1992번: 쿼드트리
#include <bits/stdc++.h>
using namespace std;
int n;
int paper[64][64];

bool check(int x, int y, int n)
{
    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (paper[i][j] != paper[x][y]) return false;
        }
    }
    return true;
}
void solve(int x, int y, int n)
{
    if (check(x, y, n))
    {
        cout << paper[x][y];
        return;
    }
    else
    {
        cout << "(";
        int nn = n / 2;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                solve(x + i * nn, y + j * nn, nn);
        cout << ")";
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            paper[i][j] = c - '0';
        }
    }

    solve(0, 0, n);
}
