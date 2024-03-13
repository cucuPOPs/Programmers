// 18808번: 스티커붙이기
#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int note[42][42];
int r, c;
int sticker[12][12];

// paper를 90도 회전하는 함수
void rotate()
{
    int tmp[12][12];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            tmp[i][j] = sticker[i][j];

    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            sticker[i][j] = tmp[r - 1 - j][i];

    swap(r, c);
}

// note의 (x,y)에 모눈종이의 (0,0)이 올라가게 스티커를 붙일 수 있는지 판단하는 함수. 가능할 경우 note를 갱신한 후 true를 반환.
bool pastable(int x, int y)
{
    // check
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (note[x + i][y + j] == 1 && sticker[i][j] == 1)
                return false;
        }
    }

    // update
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (sticker[i][j] == 1)
                note[x + i][y + j] = 1;
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    while (k--)
    {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> sticker[i][j];

        for (int rot = 0; rot < 4; rot++)
        {
            bool is_paste = false;

            //좌상단부터 붙일수있는지 탐색.
            for (int x = 0; x < n - r + 1; x++)
            {
                if (is_paste) break;
                for (int y = 0; y < m - c + 1; y++)
                {
                    if (pastable(x, y))
                    {
                        is_paste = true;
                        break;
                    }
                }
            }
            if (is_paste) break;
            rotate();
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cnt += note[i][j];

    cout << cnt << '\n';
}

//회전구현이 포인트.