// 2447번: 별찍기-10
#include <bits/stdc++.h>
using namespace std;
int paper[2200][2200]; // 3^7~=2200
void solve(int x, int y, int n)
{
    if (n == 1)
    {
        paper[x][y] = 1;
        return;
    }

    int nn = n / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                continue;
            solve(x + i * nn, y + j * nn, nn);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    solve(0, 0, t);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (paper[i][j])
                cout << "*";
            else
                cout << " ";
        }
        cout << '\n';
    }
}