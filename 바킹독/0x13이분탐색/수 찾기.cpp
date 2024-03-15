// 1920번: 수 찾기
#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100002];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        if (binary_search(a, a + n, t))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}

// 오름차순 정렬후, binary_search함수를 사용.
