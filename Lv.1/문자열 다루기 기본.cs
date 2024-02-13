//문자열 다루기 기본
//2021.12.22.
//tryParse도 있구나..
bool Solution(string s)
{
    if (s.Length != 4 && s.Length != 6) return false;
    char[] ch = s.ToCharArray();
    foreach (char c in ch)
    {
        if (!char.IsNumber(c)) return false;
    }
    return true;
}

bool Solution_parse(string s)
{
    bool answer = false;
    if (s.Length == 4 || s.Length == 6)
        answer = int.TryParse(s, out int i);
    return answer;
}