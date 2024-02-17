//내적
//2022.01.09.
//zip 사용. return a.Zip(b, (t1, t2) => t1 * t2).Sum();
int solution(int[] a, int[] b)
{
    return a.Select((v, i) => v * b[i]).Sum();
}

int solution_useZip(int[] a, int[] b)
{
    return a.Zip(b, (v1, v2) => v1 * v2).Sum();
}