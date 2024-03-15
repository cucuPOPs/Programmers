// 11047번: 동전0
#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[12];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        res += k / a[i];
        k %= a[i];
    }
    cout << res;
}
/*
# 문제요약.
동전 n개, 타겟금액k.
동전의가치 a[i]
타겟금액을 만들기위한 최소동전개수.

## 가장가치가 큰 동전부터, 많이사용하면 된다.
=> "A1 = 1, i ≥ 2인 경우에 Ai는 Ai-1의 배수" 이기때문에, 가능함.


배수관계조건이 빠진다면....
# 예제.
동전 3종, [1,9,10], 타겟 18원.
이 예제에서는 9원동전 2개를 사용하는게 최소값이지만,
위의 풀이방법으로 푼다면, 10:1개,9:0개, 1:8개, 총 9개 사용된다.

결론: 아는문제라고 섣불리 판단하지말것. 꼼꼼히 문제읽을것.
*/