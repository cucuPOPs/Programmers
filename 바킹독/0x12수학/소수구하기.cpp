// 1929번: 소수구하기
#include <bits/stdc++.h>
using namespace std;

vector<bool> b(1000002, true);
void func(int n)
{
    b[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (!b[i]) continue;

        //i의 배수들은 소수가 아님.
        for (int j = 2 * i; j <= n; j += i)
            b[j] = false;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    func(n);

    for (int i = m; i <= n; i++)
    {
        if (b[i]) cout << i << '\n';
    }
}
/*
에라토스테네스의 체.


# 개미눈꼽팁.
bool b[10]; //char처럼, 1byte.
vector<bool> v; //1bit 최적화.
## vector bool로 두면 더 빠르다..

*/
