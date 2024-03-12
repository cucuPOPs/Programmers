// H-Index
#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> citations)
{
    sort(citations.begin(), citations.end());
    int answer = citations.size();
    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] < answer)
        {
            answer--;
        }
    }
    return answer;
}