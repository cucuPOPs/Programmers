
//하샤드 수
//2021.12.11.
bool solution(int x)
{
    int haShad = 0;
    int origin = x;
    int max = x.ToString().Length;
    for (int i = 0; i < max; i++)
    {
        haShad += x % 10;
        x /= 10;
    }

    return origin % haShad == 0;
}


//linq...한줄코딩 멋지네
bool SolutionUseLinq(int x)
{
    bool answer = true;

    var temp = x.ToString().ToList().Select(y => int.Parse(y.ToString())).Sum();

    if (x % temp != 0) answer = false;

    return answer;
}