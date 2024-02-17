// 1406번: 에디터
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    list<char> list;

    for (auto c : s)
        list.push_back(c);

    auto cursor = list.end();

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        char op;
        cin >> op;
        if (op == 'L')
        {
            if (cursor != list.begin())
                cursor--;
        }
        else if (op == 'D')
        {
            if (cursor != list.end())
                cursor++;
        }
        else if (op == 'B')
        {
            if (cursor != list.begin())
            {
                cursor--;
                cursor = list.erase(cursor);
            }
        }
        else if (op == 'P')
        {
            char add;
            cin >> add;
            list.insert(cursor, add);
        }
    }

    for (auto c : list)
        cout << c;
}