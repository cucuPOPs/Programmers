using System;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //없는 숫자 더하기.
        //++++++++++++++++++++++++++
        //2022.01.09.
        //ez.
        public void Solution_135()
        {
            //
            Console.WriteLine(solution(new int[]{1,2,3}));
            int solution(int[] numbers)
            {
                return 45 - numbers.Sum();
            }
        }
    }
}