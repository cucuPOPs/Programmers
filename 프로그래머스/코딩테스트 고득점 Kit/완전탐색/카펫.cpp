// 카펫
#include <bits/stdc++.h>
using namespace std;
vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int area = brown + yellow;
    for (int h = 3; h * h <= area; h++)
    {
        if (area % h != 0) continue;
        int w = area / h;

        if (2 * w + 2 * h == brown + 4)
        {
            answer.push_back(w);
            answer.push_back(h);
        }
    }
    
    return answer;
}