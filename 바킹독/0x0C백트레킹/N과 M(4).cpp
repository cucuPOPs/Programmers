// 15652번: N과 M(4)
#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int curIndex)
{
    if (curIndex == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (curIndex != 0 && i < arr[curIndex - 1]) continue;
        arr[curIndex] = i;
        func(curIndex + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
}