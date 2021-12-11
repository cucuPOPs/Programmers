using System;
using System.Linq;
namespace Programmers
{
    public partial class Program
    {
        //하샤드 수.
        //++++++++++++++++++++++++++
        //2021.12.11.
        //linq...한줄코딩 멋지네
        public void Solution_105()
        {
            Console.WriteLine(solution(10));
            Console.WriteLine(solution(12));
            Console.WriteLine(solution(11));
            Console.WriteLine(solution(13));
            bool solution(int x) {
                int haShad = 0;
                int origin = x;
                int max = x.ToString().Length;
                for (int i = 0; i < max; i++)
                {
                    haShad += x % 10;
                    x /= 10;
                }

                return origin % haShad == 0;
            }
            
            bool solution_useLinq(int x) {
                bool answer = true;

                var temp = x.ToString().ToList().Select(y => int.Parse(y.ToString())).Sum();

                if (x % temp != 0)
                    answer = false;

                return answer;
            }
        }
    }
}