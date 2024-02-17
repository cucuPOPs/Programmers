//자릿수 더하기
//2021.12.20.
int Solution(int n)
{
    int result = 0;
    while (n > 0)
    {
        result += n % 10;
        n /= 10;
    }

    return result;
}