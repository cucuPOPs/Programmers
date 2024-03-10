// 15650번: N과 M(2)
#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int curIndex)
{
    if (curIndex == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        //"고른 수열은 오름차순이어야 한다"
        if (curIndex != 0 && i < arr[curIndex - 1]) continue;

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
    func(0);
}