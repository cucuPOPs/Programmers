//핸드폰 번호 가리기
//2021.12.11
string solution(string phone_number)
{
    string answer = "";
    string t = phone_number.Substring(phone_number.Length - 4);
    for (int i = 0; i < phone_number.Length; i++)
    {
        answer += "*";
    }

    answer += t;
    return answer;
}


string SolutionUsePaddingLeft(string phone_number)
{
    string answer = phone_number.Substring(phone_number.Length - 4);
    answer = answer.PadLeft(phone_number.Length, '*');
    return answer;
}