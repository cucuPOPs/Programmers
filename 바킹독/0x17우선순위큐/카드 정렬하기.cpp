// 1715번: 카드 정렬하기
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int, vector<int>, greater<int>> pq;//최소힙
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1)
    {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        ans += a + b;
        pq.push(a + b);
    }
    cout << ans;
}