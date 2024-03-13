// 모의고사
#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> answers)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> count = {0, 0, 0};

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == a[i % 5]) count[0]++;
        if (answers[i] == b[i % 8]) count[1]++;
        if (answers[i] == c[i % 10]) count[2]++;
    }

    int max = *max_element(count.begin(), count.end());

    vector<int> answer;
    for (int i = 0; i < 3; i++)
    {
        if (max == count[i]) answer.push_back(i + 1);
    }
    return answer;
}