//3진법 뒤집기
//2022.01.16.
//와우....초깔끔...
//#진수변환 #진법변환
int solution(int n)
{
    List<int> list = new List<int>();
    while (n != 0)
    {
        list.Add(n % 3);
        n /= 3;
    }

    list.Reverse();

    return (int)list.Select((x, idx) => x * Math.Pow(3, idx)).Sum();
}