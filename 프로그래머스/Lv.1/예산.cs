//예산
//2022.01.16.
//for문을 linq로 될꺼같은데, 못짜겟네
int solution(int[] d, int budget)
{
    var list = d.ToList();
    list.Sort();
    int sum = 0;
    int count = 0;
    foreach (var t in list)
    {
        sum += t;
        if (sum <= budget) count++;
        else break;
    }
    return count;
}