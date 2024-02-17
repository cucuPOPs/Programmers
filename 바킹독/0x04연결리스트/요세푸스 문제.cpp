// 1158번: 요세푸스 문제
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    cout << '<';
    while (!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (q.size() > 0)
            cout << ", ";
    }
    cout << '>';
}