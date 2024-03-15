// 10816번: 숫자카드2
#include <bits/stdc++.h>
using namespace std;

int n;
int a[500002];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int m;
    cin >> m;
    while (m--)
    {
        int t;
        cin >> t;
        cout << upper_bound(a, a + n, t) - lower_bound(a, a + n, t) << '\n';
    }
}

// lower_bound: target이상, 처음등장하는 인덱스를 반환.
// upper_bound: target초과, 처음등장하는 인덱스를 반환.
// equal_range(a,a+n,t): lower_bound,upper_bound값을 pair로 반환.