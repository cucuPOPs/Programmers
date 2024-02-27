#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (auto i : arr)
    {
        if (!answer.empty() && answer.back() == i)
            continue;

        answer.push_back(i);
    }

    return answer;
}