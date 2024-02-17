// 10808번: 알파벳 개수
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;

    int arr[26] = {};
    for (char ch : name)
    {
        arr[ch - 'a']++;
    }

    for (int i : arr)
    {
        cout << i << ' ';
    }

    return 0;
}