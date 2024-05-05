#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int a[1000];
int pge[1000];
int nge[1000];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 왼큰수. 정방향 탐색. 스택 내림차순.
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && a[s.top()] <= a[i])
            s.pop();

        pge[i] = s.empty() ? -1 : s.top();

        s.push(i);
    }

    // stack clear.
    while (!s.empty())
        s.pop();

    // 오큰수: 역방향 탐색.스택 내림차순.
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && a[s.top()] <= a[i])
            s.pop();

        nge[i] = s.empty() ? -1 : s.top();

        s.push(i);
    }


    //출력.
    cout << "[PGE]:";
    for(int i=0;i<n;i++)
    {
        cout << pge[i] << " ";
    }
    cout <<'\n';

    cout << "[NGE]:";
    for(int i=0;i<n;i++)
    {
        cout << nge[i] << " ";
    }
    cout <<'\n';

}
