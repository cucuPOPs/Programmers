using System;
using System.Collections.Generic;

namespace Programmers
{
    public partial class Program
    {
        //정수 제곱근 판별.
        //++++++++++++++++++++++++++
        //2021.12.20.
        // if (sqrt % 1.0 != 0) 배워갑니다
        public void Solution_111()
        {
            Console.WriteLine(Solution(121));//144
            Console.WriteLine(Solution(3));//-1
            long Solution(long n)
            {
                for (long i = 1; i * i <= n; i++)
                {
                    if ( i *i == n)
                    {
                        return (i + 1) * (i + 1);
                    }
                }
                return -1;
            }
        }

        private long Solution_UseMath(long n)
        {
            long answer = 0;

            var sqrt = Math.Sqrt(n);

            //Wow...정수판정을 이렇게!!
            if (sqrt % 1.0 != 0) return -1;

            answer = (long) sqrt;

            answer += 1;
            answer *= answer;

            return answer;
        }
    }
}