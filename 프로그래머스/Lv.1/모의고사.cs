//모의고사
//2022.01.09.
//클래스를 맹그려버렷다.
//학생1 : 1,2,3,4,5   1,2,3,4,5 ...
//학생2 : 2,1,2,3,2,4,2,5,   2,1,2,3,2,4,2,5, ...
//학생3 : 3,3,1,1,2,2,4,4,5,5,    3,3,1,1,2,2,4,4,5,5, ...
public class Student
{
    private int[] routine;
    private int[] answer;

    public Student(int[] _routine, int[] _answer)
    {
        routine = _routine;
        answer = _answer;
    }

    public int GetScore()
    {
        int result = 0;
        for (int i = 0; i < answer.Length; i++)
        {
            if (answer[i] == routine[i % routine.Length]) result++;
        }

        return result;
    }
}

int[] solution(int[] answers)
{
    Student st1 = new Student(new int[] { 1, 2, 3, 4, 5 }, answers);
    Student st2 = new Student(new int[] { 2, 1, 2, 3, 2, 4, 2, 5 }, answers);
    Student st3 = new Student(new int[] { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }, answers);
    List<int> scores = new List<int>();
    scores.Add(st1.GetScore());
    scores.Add(st2.GetScore());
    scores.Add(st3.GetScore());
    //
    List<int> result = new List<int>();
    if (scores[0] == scores.Max()) result.Add(1);
    if (scores[1] == scores.Max()) result.Add(2);
    if (scores[2] == scores.Max()) result.Add(3);
    return result.ToArray();
}