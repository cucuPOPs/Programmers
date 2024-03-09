// 1074번: Z
#include <bits/stdc++.h>
using namespace std;
int func(int n, int r, int c)
{
    if (n == 1)
    {
        return 2 * r + c;
    }

    int half = 1 << (n - 1); // 한 변 길이의 절반==2^(n-1)
    if (r < half && c < half) return func(n - 1, r, c);
    if (r < half && c >= half) return half * half + func(n - 1, r, c - half);
    if (r >= half && c < half) return 2 * half * half + func(n - 1, r - half, c);
    return 3 * half * half + func(n - 1, r - half, c - half);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, r, c;
    cin >> n >> r >> c;
    cout << func(n, r, c);
}
