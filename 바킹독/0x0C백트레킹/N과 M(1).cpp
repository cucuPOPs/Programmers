// 15649번: N과 M(1)
#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];
bool isused[10];
void func(int k)
{
    //base condition.
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!isused[i])
        {
            arr[k] = i;
            isused[i] = true;
            func(k + 1);
            isused[i] = false;
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
}

// 백트레킹 개념문제..
