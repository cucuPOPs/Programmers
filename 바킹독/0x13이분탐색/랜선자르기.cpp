// 1654번: 랜선자르기
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int k, n;
int arr[10005];

bool solve(ll x)
{
    ll cur = 0;
    for (int i = 0; i < k; i++)
        cur += arr[i] / x;
    return cur >= n;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    ll st = 1;
    ll en = 0x7fffffff; // 2^31 - 1
    while (st < en)
    {
        ll mid = (st + en + 1) / 2;//유의. mid = st+en/2; 일경우 무한루프빠질수있음.
        if (solve(mid))
            st = mid;
        else
            en = mid - 1;
    }
    cout << st;
}

//parametric search...
//


/*
이진탐색.참고.
int binarysearch(int target){
  int st = 0;
  int en = n-1;
  while(st <= en){
    int mid = (st+en)/2;
    if(a[mid] < target)
      st = mid+1;
    else if(a[mid] > target)
      en = mid-1;
    else
      return 1;
  }
  return 0; // st > en일 경우 while문을 탈출
}

*/