// 1182번: 부분수열의 합
#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[22];
int cnt = 0;

void func(int curIndex, int sum)
{
    // base condition.
    if (curIndex == n)
    {
        if (sum == s) cnt++;
        return;
    }

    // 매순간, 더하거나, 더하지않거나.
    func(curIndex + 1, sum);
    func(curIndex + 1, sum + arr[curIndex]);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    func(0, 0);

    if (s == 0) cnt--; // 공집합 제거.

    cout << cnt;
}