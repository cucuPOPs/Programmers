// 3273번: 두 수의 합
#include <bits/stdc++.h>
using namespace std;
int arr[100001];
bool exist[2000000];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (x - arr[i] < 0)
            continue;
        if (exist[x - arr[i]])
            result++;
        exist[arr[i]] = true;
    }

    cout << result;
}
