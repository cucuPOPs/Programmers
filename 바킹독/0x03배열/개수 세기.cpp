// 10807번: 개수 세기
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[201] = {};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp + 100]++;
    }

    int target;
    cin >> target;

    cout << arr[target + 100];
}
