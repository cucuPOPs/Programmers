//로또의 최고 순위와 최저 순위
//2022.01.11.
//C# 신기능 스위치문은 안되네 ㅎ. 어우 잠온다
int[] solution(int[] lottos, int[] win_nums)
{
    int invisibleCount = lottos.Count(t => t == 0);
    int matchedCount = lottos.Count(win_nums.Contains);
    int maxMatch = matchedCount + invisibleCount;
    int minMatch = matchedCount;
    int bestRank, worstRank;
    switch (maxMatch)
    {
        case 6: bestRank = 1; break;
        case 5: bestRank = 2; break;
        case 4: bestRank = 3; break;
        case 3: bestRank = 4; break;
        case 2: bestRank = 5; break;
        default: bestRank = 6; break;
    }
    switch (minMatch)
    {
        case 6: worstRank = 1; break;
        case 5: worstRank = 2; break;
        case 4: worstRank = 3; break;
        case 3: worstRank = 4; break;
        case 2: worstRank = 5; break;
        default: worstRank = 6; break;
    }
    // int bestRank =  maxMatch switch
    // {
    //     6=>1, 5=>2, 4=>3, 3=>4, 2=>5, _=>6
    // };
    // int worstRank =  minMatch switch
    // {
    //     6=>1, 5=>2, 4=>3, 3=>4, 2=>5, _=>6
    // };
    return new int[] { bestRank, worstRank };
}