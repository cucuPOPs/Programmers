using System;
namespace Programmers
{
    public partial class Program
    {
        //x만큼 간격이 있는 n개의 숫자
        //++++++++++++++++++++++++++
        //2021.12.11
        //ez
        public void Solution_102()
        {
            string[] s= Console.ReadLine().Split(' ');
            int a = int.Parse(s[0]);
            int b = int.Parse(s[1]);
            foreach (var t in solution(a,b))
            {
                Console.Write($"{t},");
            }
            
            long[] solution(int x, int n)
            {
                long[] answer = new long[n];
                answer[0] = x;
                for (int i =1; i < n; i++)
                {
                    answer[i] = x + answer[i - 1];
                }
                return answer;
            }
        }
    }
}