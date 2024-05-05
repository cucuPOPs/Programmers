|                                  문제                                   |        코드         | 2024.05.05 |
| :---------------------------------------------------------------------: | :-----------------: | :--------: |
|              [스택](https://www.acmicpc.net/problem/10828)              | [코드](./10828.cpp) |     🟢      |
|              [제로](https://www.acmicpc.net/problem/10773)              | [코드](./10773.cpp) |     🟢      |
|            [스택 수열](https://www.acmicpc.net/problem/1874)            | [코드](./1874.cpp)  |     🟢      |
|               [탑](https://www.acmicpc.net/problem/2493)                | [코드](./2493.cpp)  |     🟢      |
|        [옥상 정원 꾸미기](https://www.acmicpc.net/problem/6198)         | [코드](./6198.cpp)  |     ❌      |
|             [오큰수](https://www.acmicpc.net/problem/17298)             | [코드](./17298.cpp) |     🟢      |
|         [오아시스 재결합](https://www.acmicpc.net/problem/3015)         | [코드](./3015.cpp)  |     ❌      |
| [히스토그램에서 가장 큰 직사각형](https://www.acmicpc.net/problem/6549) | [코드](./6549.cpp)  |     ❌      |





# Stack
|  op   |                  desc                  | time  |
| :---: | :------------------------------------: | :---: |
|  top  | 맨위요소 참조. empty()경우 런타임에러. | O(1)  |
| push  |            맨위 요소 추가.             | O(1)  |
|  pop  |            맨위 요소 제거..            | O(1)  |
| size  |           요소 개수를 반환.            | O(1)  |
| empty |          크기가 0인지 테스트.          | O(1)  |


### 왼큰수(PGE), 오큰수(NGE)
```c++
#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int a[1000];
int pge[1000];
int nge[1000];
int main()
{
    //입력.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];


    // 왼큰수. 정방향 탐색. 스택 내림차순.
    for (int i = 0; i < n; i++)
    {
        //a[i]보다 작거나같은수는 pop()한다. 그러면, top에는 왼큰수.
        while (!s.empty() && a[s.top()] <= a[i])
            s.pop();

        pge[i] = s.empty() ? -1 : s.top();

        s.push(i);
    }

    //출력.
    cout << "[PGE]:";
    for(int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }
    cout <<'\n';


    //s.clear();
    while(!s.empty())
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

    cout << "[NGE]:";
    for(int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout <<'\n';
```
