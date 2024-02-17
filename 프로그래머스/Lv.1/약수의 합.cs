//약수의 합
//2021.12.20.
//short code 보다 가독성!!!
int Solution(int n)
{
    int answer = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
            //25 : 1 5 5 25=> 1 5 25
            if (i * i != n) answer += n / i;
        }
    }
    return answer;
}