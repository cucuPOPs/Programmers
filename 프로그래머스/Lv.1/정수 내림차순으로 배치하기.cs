//정수 내림차순으로 배치하기
//2021.12.20.
//숏코드..우월하네.
long Solution(long n)
{
    List<string> list = new List<string>();
    foreach (char ch in n.ToString())
    {
        list.Add(ch.ToString());
    }
    list.Sort((a, b) => b.CompareTo(a));

    string result = "";
    foreach (string s in list)
    {
        result += s;
    }
    return long.Parse(result);
}
long Solution_Short(long n)
{
    long answer = 0;
    char[] a = n.ToString().ToCharArray();
    System.Array.Sort(a);
    System.Array.Reverse(a);
    answer = System.Convert.ToInt64(new string(a));
    return answer;
}