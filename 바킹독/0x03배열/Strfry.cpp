// 11328번: Strfry
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string first, second;
        cin >> first >> second;
        int arr[26] = {};
        for (const char &ch : first)
        {
            arr[ch - 'a']++;
        }
        for (const char &ch : second)
        {
            arr[ch - 'a']--;
        }

        bool isPossible = true;
        for (const int &i : arr)
        {
            if (i != 0)
            {
                isPossible = false;
                break;
            }
        }

        cout << (isPossible ? "Possible\n" : "Impossible\n");
    }
}

// for (const char &ch : first) 이런거는, for(auto c : s) 이렇게..