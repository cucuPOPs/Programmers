using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //예산.
        //++++++++++++++++++++++++++
        //2022.01.16.
        //for문을 linq로 될꺼같은데, 못짜겟네
        public void Solution_140()
        {
            int result = solution(new int[] {1, 3, 2, 5, 4}, 9);
            Console.WriteLine(result);

            var numbers = new List<int>();
            var c = 1 + numbers.Sum();

            //
            int solution(int[] d, int budget) {
                var list = d.ToList();
                list.Sort();
                int sum = 0;
                int count = 0;
                foreach (var t in list)
                {
                    sum += t;
                    if (sum <= budget) count++;
                    else break;
                }
                return count;
            }
        }
    }
}