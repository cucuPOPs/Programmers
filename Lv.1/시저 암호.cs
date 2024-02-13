//시저 암호
//2021.12.20.
//더 줄이고싶은데, 그건 힘들겠지...
string Solution(string s, int n)
{
    string result = "";
    char[] ch = s.ToCharArray();
    for (int i = 0; i < ch.Length; i++)
    {
        if (char.IsLower(ch[i]))
        {
            ch[i] = (char)((ch[i] - 'a' + (char)n) % 26 + 'a');
        }
        else if (char.IsUpper(ch[i]))
        {
            ch[i] = (char)((ch[i] - 'A' + (char)n) % 26 + 'A');
        }

        result += ch[i];
    }
    return result;
}