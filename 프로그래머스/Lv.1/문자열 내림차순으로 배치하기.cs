//문자열 내림차순으로 배치하기
//2021.12.22.
string Solution(string s)
{
    char[] ch = s.ToCharArray();
    Array.Sort(ch, (a, b) => b.CompareTo(a));
    return new string(ch);
}