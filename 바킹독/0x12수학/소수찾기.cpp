// 1978번: 소수찾기
#include <bits/stdc++.h>
using namespace std;
int n;
int a[102];

bool isPrime(int n)
{
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i])) cnt++;
    }
    cout << cnt << '\n';
}