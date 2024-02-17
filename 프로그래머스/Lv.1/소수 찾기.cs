//소수 찾기
//2021.12.20.
//#제곱근.
int Solution(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (IsPrime(i))
        {
            cnt++;
        }
    }
    return cnt;

}
bool IsPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}