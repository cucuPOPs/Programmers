// 3015번: 오아시스 재결합
// 문제해석: 서로 볼수있는 쌍은 몇개?
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
struct Person
{
  int height;
  int equal;
};

long long ans;
stack<pair<int, int>> S;
int n;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  // 정방향 탐색: 왼쪽으로 바라볼때, 볼수있는 갯수를 구한다.
  for (int i = 0; i < n; i++)
  {
    int h;
    cin >> h;
    int cnt = 1;

    //h입장에서 top이 왼작같수이면 pop한다.
    //스택은 내림차순이 된다.
    while (!S.empty() && S.top().X <= h)
    {
      ans += S.top().Y; // 왼작같수를 볼수있으므로 ans++.
      if (S.top().X == h)
        cnt += S.top().Y;
      S.pop();
    }

    // pop을 모두끝낸상태에서의 top은 왼큰수를 의미.
    // 왼큰수가 있을경우 ans++.
    // ex) [6,3,4]에서 4의경우, 6을 볼수있음.
    if (!S.empty())
      ans++;

    S.push({h, cnt});
  }
  cout << ans;
}

// 스택에는 내림차순으로 쌓인다.
// cnt는 해당키를 가진사람이 연속적으로 몇명이나 있는가..를 의미.
// stack <높이, 같은높이개수>