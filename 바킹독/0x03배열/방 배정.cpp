// 13300번: 방 배정
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[17] = {};

    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        arr[t1 * 10 + t2]++;
    }

    int result = 0;
    for (int i = 0; i < 17; i++)
    {
        int temp = arr[i];
        while (temp > 0)
        {
            result++;
            temp -= k;
        }
    }

    cout << result;
}

// 참고.
// int s[2][7] = {};  // 성별/반별 학생 수를 저장하는 배열
