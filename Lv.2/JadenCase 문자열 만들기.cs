//JadenCase 문자열 만들기
//2021.12.11.
//나름 깔끔하게 짠거같음 ㅎ 뿌듯잼ㅋ
string Solution(string s)
{
    string[] t = s.Split(' ');
    for (int i = 0; i < t.Length; i++)
    {
        if (string.IsNullOrEmpty(t[i])) continue;
        t[i] = t[i].ToUpper().First() + t[i].ToLower().Substring(1);
    }

    return string.Join(' ', t);

}