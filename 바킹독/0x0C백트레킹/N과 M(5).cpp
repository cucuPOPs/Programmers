// 15654번: N과 M(5)
#include <bits/stdc++.h>
using namespace std;
int arr[10];
int num[10];
bool isused[10];
int n, m;
void func(int curIndex)
{
    if (curIndex == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << num[arr[i]] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!isused[i])
        {
            arr[curIndex] = i;
            isused[i] = true;
            func(curIndex + 1);
            isused[i] = false;
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    std::sort(num, num + n);
    func(0);
}