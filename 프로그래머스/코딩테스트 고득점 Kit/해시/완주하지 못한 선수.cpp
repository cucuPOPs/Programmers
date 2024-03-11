#include <bits/stdc++.h>
using namespace std;
string solution(vector<string> participant, vector<string> completion)
{
    unordered_multiset<string> ms;

    for (auto s : participant)
        ms.insert(s);
        
    for (auto s : completion)
        ms.erase(ms.find(s));

    return *ms.begin();
}
