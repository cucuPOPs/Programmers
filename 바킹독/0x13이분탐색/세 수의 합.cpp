// 2295번: 세 수의 합
#include <bits/stdc++.h>
using namespace std;

int n;
int a[1002];
vector<int> two;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n ; i++)
        for (int j = i; j < n; j++)
            two.push_back(a[i] + a[j]);

    sort(two.begin(), two.end());

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (binary_search(two.begin(), two.end(), a[i] - a[j]))
            {
                cout << a[i];
                return 0;
            }
        }
    }
}

//세수의 합이 배열에 존재하는 최대값.
//a[i] + a[j] + a[k] = a[l].
//two[m]+a[k]=a[l].
//two[m]=a[l]-a[k] 