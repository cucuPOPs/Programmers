// 1475번: 방 번호
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10] = {};

    while (n > 0)
    {
        arr[n % 10]++;
        n /= 10;
    }
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        if (result < arr[i])
            result = arr[i];
    }
    int temp = (arr[6] + arr[9] + 1) / 2;
    if (result < temp)
        result = temp;

    cout << result;
}

// #include <algorithm>에 max함수가 있음.

// template <class T>
// const T &max(const T &a, const T &b);
