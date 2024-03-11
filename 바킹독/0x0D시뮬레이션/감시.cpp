// 15683번: 감시
#include <bits/stdc++.h>
using namespace std;
int n, m;
int board[10][10]; // 입력.
int memo[10][10];  // 사각지대.
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool OOB(int a, int b)
{ // Out Of Bounds 확인
    return a < 0 || a >= n || b < 0 || b >= m;
}
// (x,y)에서 dir 방향으로 진행하면서 벽을 만날 때 까지 지나치는 모든 빈칸을 7로 바꿔버림
void ray(int x, int y, int dir)
{
    dir %= 4;
    while (true)
    {
        x += dx[dir];
        y += dy[dir];
        if (OOB(x, y) || memo[x][y] == 6) return; // 범위를 벗어났거나 벽을 만나면 함수를 탈출
        if (memo[x][y] != 0) continue;            // 해당 칸이 빈칸이 아닐 경우(=cctv가 있을 경우) 넘어감
        memo[x][y] = 7;                           // 빈칸을 7로 덮음
    }
}

vector<pair<int, int>> cctv; // cctv의 좌표를 저장할 변수
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m; // 행,열.

    int min = 0; // 사각 지대의 최소 크기 (=답)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] != 0 && board[i][j] != 6)
                cctv.push_back({i, j});
            if (board[i][j] == 0) min++; // 빈칸일경우 모두 카운트.
        }
    }

    //!!백트레킹 전략대신, 진법을 이용한 방법.
    // 4진법 0123 숫자는 cctv방향을 의미하고, 각자리수는 cctv개수를 의미.
    // 1번카메라가 2개일때, 4진법으로 00~33까지.(16가지)
    int max = 1;
    for (int i = 0; i < cctv.size(); i++)
        max *= 4;

    for (int tmp = 0; tmp < max; tmp++)
    {
        // memo 초기화.
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                memo[i][j] = board[i][j];

        int brute = tmp; // brute변수에, 모든cctv의 방향정보가 담겨있음.
        for (int i = 0; i < cctv.size(); i++)
        {
            int dir = brute % 4;
            brute /= 4;
            int x = cctv[i].first;
            int y = cctv[i].second;
            if (board[x][y] == 1)
            {
                ray(x, y, dir);
            }
            else if (board[x][y] == 2)
            {
                ray(x, y, dir);
                ray(x, y, dir + 2);
            }
            else if (board[x][y] == 3)
            {
                ray(x, y, dir);
                ray(x, y, dir + 1);
            }
            else if (board[x][y] == 4)
            {
                ray(x, y, dir);
                ray(x, y, dir + 1);
                ray(x, y, dir + 2);
            }
            else if (board[x][y] == 5)
            {
                ray(x, y, dir);
                ray(x, y, dir + 1);
                ray(x, y, dir + 2);
                ray(x, y, dir + 3);
            }
        }
        
        int val = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (memo[i][j] == 0)
                    val++;

        min = std::min(min, val);
    }
    cout << min;
}