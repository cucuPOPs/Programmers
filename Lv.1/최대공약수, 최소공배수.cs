//최대공약수, 최소공배수.
//2021.12.11
//Greatest common divisor
//Largest Common Multiple
//검색없이 할려니까, 오래걸리네
int[] Solution(int n, int m)
{
    int gcd = getGCD(n, m);
    int lcm = n * m / getGCD(n, m);
    return new int[] { gcd, lcm };

    int getGCD(int a, int b)
    {
        return a % b == 0 ? b : getGCD(b, a % b);
    }
}

int[] SolutionSimple(int n, int m)
{
    int[] answer = new int[2];
    //최대공약수
    for (int i = 1; i < Math.Min(n, m) + 1; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            answer[0] = i;
        }
    }

    //최소 공배수
    for (int i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            answer[1] = i;
            break;
        }
    }

    return answer;
}