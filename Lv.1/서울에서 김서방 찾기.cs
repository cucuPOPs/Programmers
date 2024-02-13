//서울에서 김서방 찾기
//2021.12.20.
string Solution(string[] seoul)
{
    string answer = "";
    for (int i = 0; i < seoul.Length; i++)
    {
        if (seoul[i].Contains("Kim"))
        {
            answer = $"김서방은 {i}에 있다";
        }
    }

    return answer;
}
public string solution_UseFindIndex(string[] seoul)
{
    int answer = 0;
    answer = Array.FindIndex(seoul, i => i == "Kim");
    return string.Format("김서방은 {0}에 있다", answer);
}