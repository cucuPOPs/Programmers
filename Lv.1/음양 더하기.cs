//음양 더하기
//2022.01.09.
int solution(int[] absolutes, bool[] signs)
{
    long result = 0;
    for (int i = 0; i < absolutes.Length; i++)
    {
        result += (signs[i] == true ? 1 : -1) * absolutes[i];
    }
    return (int)result;
}


//한줄wow..
int solution_WOW(int[] absolutes, bool[] signs)
{
    return absolutes.Select((v, i) => signs[i] == true ? v : -v).Sum();
}