// 피로도
#include <bits/stdc++.h>
using namespace std;
int solution(int k, vector<vector<int>> dungeons)
{
    vector<int> v;
    for (int i = 0; i < dungeons.size(); i++)
        v.push_back(i);

    int max = 0;
    do
    {
        int temp = k;
        int visitCount = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int visitIndex = v[i];
            if (temp >= dungeons[visitIndex][0])
            {
                temp -= dungeons[visitIndex][1];
                visitCount++;
            }
        }
        max = std::max(max, visitCount);
    }
    while(next_permutation(v.begin(), v.end()));


    return max;
}