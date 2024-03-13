// 모음사전
#include <bits/stdc++.h>
using namespace std;
int solution(string word)
{
    set<string> set;
    string aeiou = "AEIOU";
    // 0-emtpy.
    //  1-A
    //  2-E
    //  3-I
    //  4-O
    //  5-U
    //=>6진수.

    // 조합이 [A,emtpy,empty,,] =[empty,A,empty,,,]의 결과가 A로 같기때문에 set을 사용.

    int max = 1;
    int size = aeiou.size();
    for (int i = 0; i < size; i++)
        max *= size + 1;

    for (int i = 0; i < max; i++)
    {
        int temp = i;
        string s = "";
        for (int j = 0; j < size; j++)
        {
            int target = temp % (size + 1);
            temp /= (size + 1);

            switch (target)
            {
            case 0:
                break;
            case 1:
                s += "A";
                break;
            case 2:
                s += "E";
                break;
            case 3:
                s += "I";
                break;
            case 4:
                s += "O";
                break;
            case 5:
                s += "U";
                break;
            }
        }
        if (s == "") continue;
        set.insert(s);
    }

    vector<string> v(set.begin(), set.end());
    sort(v.begin(), v.end());
    int answer = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == word)
        {
            answer = i + 1;
            break;
        }
    }
    return answer;
}
