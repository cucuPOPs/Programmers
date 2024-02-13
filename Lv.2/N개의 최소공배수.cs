//N개의 최소공배수
//2021.12.11.
int Solution(int[] arr)
{
    int answer = arr[0];
    for (int i = 1; i < arr.Length; i++)
    {
        answer = lcm(answer, arr[i]);
    }

    return answer;
}

int gcd(int a, int b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}