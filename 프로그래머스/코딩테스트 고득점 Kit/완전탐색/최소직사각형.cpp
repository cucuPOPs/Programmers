// 최소직사각형
#include <bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> sizes)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < sizes.size(); i++)
    {
        int mx = max(sizes[i][0], sizes[i][1]);
        int mn = min(sizes[i][0], sizes[i][1]);

        x = max(x, mx);
        y = max(y, mn);
    }
    return x * y;
}