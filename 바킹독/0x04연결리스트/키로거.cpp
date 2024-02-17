// 5397번: 키로거
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        list<char> list = {};
        auto cursor = list.begin();

        string s;
        cin >> s;

        for (auto c : s)
        {
            if (c == '<')
            {
                if (cursor != list.begin())
                    cursor--;
            }
            else if (c == '>')
            {
                if (cursor != list.end())
                    cursor++;
            }
            else if (c == '-')
            {
                if (cursor != list.begin())
                {
                    cursor--;
                    cursor = list.erase(cursor);
                }
            }
            else
            {
                list.insert(cursor, c);
            }
        }

        for (auto c : list)
            cout << c;
        cout << '\n';
    }
}