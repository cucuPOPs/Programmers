//숫자 문자열과 영단어
//2022.01.09.
//여기서 더 최적화 가능할까?
int solution(string s)
{
    s = s.Replace("zero", "0");
    s = s.Replace("one", "1");
    s = s.Replace("two", "2");
    s = s.Replace("three", "3");
    s = s.Replace("four", "4");
    s = s.Replace("five", "5");
    s = s.Replace("six", "6");
    s = s.Replace("seven", "7");
    s = s.Replace("eight", "8");
    s = s.Replace("nine", "9");
    return int.Parse(s);
}