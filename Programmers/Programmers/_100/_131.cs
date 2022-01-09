using System;

namespace Programmers
{
    public partial class Program
    {
        //2016년.
        //++++++++++++++++++++++++++
        //2022.01.09.
        //DataTime 이란게 있구나.
        public void Solution_131()
        {
            Console.WriteLine(solution(5,24));//"TUE"
            string solution(int a, int b) {
                string answer = "";
                DateTime date = new DateTime(2016, a, b);
                answer = date.DayOfWeek.ToString().Substring(0, 3).ToUpper();
                return answer;
            }
        }
    }
}