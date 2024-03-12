// 타겟넘버
#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> numbers, int target)
{
    int answer = 0;

    int max = 1;
    for (int i = 0; i < numbers.size(); i++)
        max *= 2; //+,- 2가지.

    for (int i = 0; i < max; i++)
    {
        int sum = 0;
        int temp = i;
        for (int j = 0; j < numbers.size(); j++)
        {
            int bit = temp % 2;
            temp /= 2;

            if (bit == 0)
                sum -= numbers[j];
            else
                sum += numbers[j];
        }
        if (sum == target) answer++;
    }
    return answer;
}