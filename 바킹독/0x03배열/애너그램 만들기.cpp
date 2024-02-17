// 1919번: 애너그램 만들기
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;

    int arr[2][26] = {};
    for (char c : s1)
        arr[0][c - 'a']++;

    for (char c : s2)
        arr[1][c - 'a']++;

    int res = 0;
    for (int i = 0; i < 26; i++)
        res += abs(arr[0][i] - arr[1][i]);

    cout << res;
}