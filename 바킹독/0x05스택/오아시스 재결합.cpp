// 3015번: 오아시스 재결합
#include <bits/stdc++.h>
using namespace std;

struct Person
{
    int height;
    int equal;
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<Person> S;
    long long ans = 0;
    while (n--)
    {
        int h;
        cin >> h;
        int cnt = 1;
        while (!S.empty())
        {
            if (S.top().height < h)
            {
                ans += S.top().equal;
                S.pop();
            }
            else if (S.top().height == h)
            {
                ans += S.top().equal;
                cnt += S.top().equal;
                S.pop();
            }
            else
            {
                ans++;
                break;
            }
        }
        S.push({ h, cnt });
    }
    cout << ans;
}

//스택에는 내림차순으로 쌓인다.
//cnt는 해당키를 가진사람이 연속적으로 몇명이나 있는가..를 의미.
