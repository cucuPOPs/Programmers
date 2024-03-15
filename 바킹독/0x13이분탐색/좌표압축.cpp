// 18870번: 좌표압축
#include <bits/stdc++.h>
using namespace std;

int n;
int x[1000002];
vector<int> uni; // unique
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        uni.push_back(x[i]);
    }
    sort(uni.begin(), uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());//중복제거.
    for (int i = 0; i < n; i++)
        cout << lower_bound(uni.begin(), uni.end(), x[i]) - uni.begin() << ' ';
}

//정렬후, std::unique함수는,중복제거를 하고, iterator를 반환.
//[1,2,2,3,3,4,4,4,5]
//[1,2,3,4,5,?,?,?,?]
//반환값은 쓰레기값이 시작되는구간을 리턴함.