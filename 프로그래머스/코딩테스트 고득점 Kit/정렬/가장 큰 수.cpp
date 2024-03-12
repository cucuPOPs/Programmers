#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    vector<string> v;
    for (int num : numbers)
    {
        v.push_back(to_string(num));
    }

    sort(v.begin(), v.end(), cmp);

    if (v[0] == "0") return "0";

    string res = "";
    for (auto s : v)
    {
        res += s;
    }

    return res;
}
// 모두 4자리숫자로 만들어 대소비교로 정렬하려했으나, 아래의 반례로 해결하지못함.
// string cmp로 해결.

// 반례.
//  [ 67, 676, 677]     답: 677 67 676
//  [ 979, 97, 978]     답: 979 97 978
//  [ 81, 818, 817]     답: 818 81 817
