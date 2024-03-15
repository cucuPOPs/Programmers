// 2217번: 로프
#include <bits/stdc++.h>
using namespace std;
int n;
int a[100002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n, greater<int>()); // 내림차.

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        max = std::max(max, a[i] * (i + 1));
    }
    cout << max;
}