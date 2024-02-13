//나누어 떨어지는 숫자 배열
//2021-12-25.
int[] solution(int[] arr, int divisor)
{
    int[] answer = arr.Where(t => t % divisor == 0).OrderBy(x => x).ToArray();
    return answer.Length == 0 ? new int[] { -1 } : answer;
}