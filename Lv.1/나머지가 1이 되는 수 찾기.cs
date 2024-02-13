//나머지가 1이 되는 수 찾기
//2021-12-25.
int solution(int n)
{
    int answer = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}