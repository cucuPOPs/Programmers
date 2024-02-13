//가운데 글자 가져오기
//2021-12-25.
string solution(string s)
{
    return s.Length % 2 == 0 ? s.Substring((s.Length - 1) / 2, 2) : s.Substring(s.Length / 2, 1);
}