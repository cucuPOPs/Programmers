//2016년
//2022.01.09.
//DataTime 이란게 있구나.
string solution(int a, int b)
{
    string answer = "";
    DateTime date = new DateTime(2016, a, b);
    answer = date.DayOfWeek.ToString().Substring(0, 3).ToUpper();
    return answer;
}
