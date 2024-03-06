// 1629번: 곱셈
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll POW(ll a, ll b, ll m)
{

    if (b == 1) return a % m;
    ll val = POW(a, b / 2, m);
    val = val * val % m;
    if (b % 2 == 0) return val;
    return val * a % m;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    cout << POW(a, b, c);
}

// 아이디어: a^n을 계산하기위해, a^(n/2)을 계산후, 곱한다.
// 시간복잡도는 logN.
// 분할정복..신기하구만..