#include <bits/stdc++.h>
using namespace std;
int arr[2000001];
int solution(vector<int> nums)
{
    int half = nums.size() / 2;
    int keyCnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (arr[nums[i]] == 0)
            keyCnt++;
        arr[nums[i]]++;
    }

    return min(keyCnt, half);
}

// set이라는 STL을 사용할수도 있다...
/*
#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> nums) {
    set<int> s;
    for(int i = 0; i < nums.size(); i++) {
        s.insert(nums[i]);
    }

    return min(s.size(), nums.size() / 2);
}
*/