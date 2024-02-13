//문자열 내 마음대로 정렬하기
//2021-12-25.
//linq 사용하면, 엄청 간결해질수 있음을 깨달음.

string[] solution(string[] strings, int n)
{
    string[] answer;
    Array.Sort(strings, (str1, str2) =>
    {
        var word1 = str1.Substring(n, 1);
        var word2 = str2.Substring(n, 1);
        if (word1 == word2)
        {
            return str1.CompareTo(str2);
        }
        else
        {
            return word1.CompareTo(word2);
        }
    });
    answer = strings;
    return answer;
}
string[] solution_2(string[] strings, int n)
{
    // 우선은 먼저 사전순으로 미리 정렬한다
    string[] answer = strings.OrderBy(word => word).ToArray();
    // 그 후 지정된 단어의 순서대로 다시 정렬
    answer = answer.OrderBy(word => word[n]).ToArray();
    return answer;
}
string[] solution_3(string[] strings, int n)
{
    return strings.OrderBy(x => x[n]).ThenBy(x => x).ToArray();
}