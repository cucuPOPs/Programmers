// 9663번: N-Queen
#include <bits/stdc++.h>
using namespace std;

// 상태를 둠으로써, O(n)이 걸릴작업을 O(1).
bool isused1[30]; // column을 차지하고 있는지           //y
bool isused2[30]; // / 방향 대각선을 차지하고 있는지     //x+y
bool isused3[30]; // \ 방향 대각선을 차지하고 있는지     //x-y+n-1 : 개념적으론 x-y이지만, 음수처리위해서 +(n-1).

int cnt = 0;
int n;
void func(int row)
{
    // base condition.
    if (row == n)
    { // N개를 놓는데 성공했다면
        cnt++;
        return;
    }

    for (int col = 0; col < n; col++)
    {                                                                         // (row, col)에 퀸을 놓을 예정
        if (isused1[col] || isused2[row + col] || isused3[row - col + n - 1]) // column이나 대각선 중에 문제가 있다면
            continue;

        isused1[col] = 1;
        isused2[row + col] = 1;
        isused3[row - col + n - 1] = 1;

        func(row + 1);

        isused1[col] = 0;
        isused2[row + col] = 0;
        isused3[row - col + n - 1] = 0;
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    func(0);
    cout << cnt;
}