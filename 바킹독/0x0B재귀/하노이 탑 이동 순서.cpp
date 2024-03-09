// 11729번: 하노이 탑 이동 순서
#include <bits/stdc++.h>
using namespace std;
// 시작기둥, 도착기둥, 원판n개
void func(int a, int b, int n)
{
    if (n == 1)
    {
        cout << a << ' ' << b << '\n';
        return;
    }
    //(6-a-b)기둥: a기둥, b기둥을 제외한 나머지 기둥.
    func(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    func(6 - a - b, b, n - 1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    cout << (1 << t) - 1 << '\n';
    // 1<<t는 2^t.

    func(1, 3, t);
}


// 귀납적 추론.
// 1개일때 옮길수 있다.
// k개일때 옮길수 있다면, k+1개일때 옮길수있다.

// 이동횟수. 
// A(n) = 2 * A(n-1) + 1
// A(1) =1
// A(2) = 2*A(1) + 1 = 3
// A(3) = 2*A(2) + 1 = 2*3 + 1 = 7
// A(4) = 2*A(3) + 1 = 2*7 + 1 = 15
//...
// A(n) =2^n - 1
