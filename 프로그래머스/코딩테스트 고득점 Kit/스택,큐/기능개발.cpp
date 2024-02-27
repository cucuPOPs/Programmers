#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    for (int i = 0; i < progresses.size();)
    {
        
        int day = ceil((100 - progresses[i]) / (double)speeds[i]);

        for (int j = i; j < progresses.size(); j++)
        {
            progresses[j] += speeds[j] * day;
        }

        int temp = 0;
        do{
            temp++;
            i++;
        } while (i < progresses.size() && !(progresses[i] < 100));

        answer.push_back(temp);
    }

    return answer;
}


//와... day 처리나, ++answer.back();허허헣..
/*
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int day;
    int max_day = 0;
    for (int i = 0; i < progresses.size(); ++i)
    {
        day = (99 - progresses[i]) / speeds[i] + 1;

        if (answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back();

        if (max_day < day)
            max_day = day;
    }

    return answer;
}
*/