// 소수 찾기
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}
int solution(string numbers)
{
    sort(numbers.begin(), numbers.end());

    set<int> set;

    do
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            int target = stoi(numbers.substr(0, i + 1));
            if (isPrime(target)) set.insert(target);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    return set.size();

}

// next_permutation. 정렬후 사용.

