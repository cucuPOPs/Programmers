// 1759번: 암호 만들기
#include <bits/stdc++.h>
using namespace std;

int l, c;
int arr[17];
char s[17];
bool isused[17];

bool aeiou(char t)
{
    return t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u';
}

void func(int curIndex)
{
    //base condition.
    if (curIndex == l)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < l; i++)
        {
            if (aeiou(s[arr[i]]))
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 >= 1 && cnt2 >= 2) 
        {
            for (int i = 0; i < l; i++)
                cout << s[arr[i]];
            cout << "\n";
        }
        return;
    }

    for (int i = 0; i < c; i++)
    {
        //오름차순.
        if (curIndex != 0 && i < arr[curIndex - 1]) continue;

        //중복제거.
        if (!isused[i])
        {
            arr[curIndex] = i;
            isused[i] = true;
            func(curIndex + 1);
            isused[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> c;

    for (int i = 0; i < c; i++)
        cin >> s[i];

    std::sort(s, s + c);

    func(0);
}