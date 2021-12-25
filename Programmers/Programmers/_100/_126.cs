using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //나누어 떨어지는 숫자 배열.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //ez.
        public void Solution_126()
        {
            int[] result = solution(new int[] {5, 9, 7, 10}, 5);
            foreach (int i in result)
            {
                Console.Write($"{i} ,");
            }

            //
            int[] solution(int[] arr, int divisor)
            {
                int[] answer = arr.Where(t => t % divisor == 0).OrderBy(x => x).ToArray();
                return answer.Length == 0 ? new int[] {-1} : answer;
            }
        }
    }
}