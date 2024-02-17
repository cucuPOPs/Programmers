//제일 작은 수 제거하기
//2021.12.11
int[] Solution(int[] arr)
{
    if (arr.Length == 1) return new int[] { -1 };

    int min = arr.ToList().Min();
    return arr.ToList().Where(t => t != min).ToArray();
}