using System;

namespace Programmers
{
    public partial class Program
    {
        //두 정수 사이의 합.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //등차수열의 합 공식 : 항 갯수 x (첫째항+마지막항) /2
        
        public void Solution_125()
        {
            long result = Solution(3, 5);
            Console.WriteLine(result);
            //
            long Solution(int a, int b)
            {
                if (a == b) return a;
                int max = Math.Max(a, b);
                int min = Math.Min(a, b);
                long sum_max = int_sum(max);
                long sum_min = int_sum(min);
                return sum_max - sum_min + min;
                
                long int_sum(int end)
                {
                    return (long) (end * (end + 1) * 0.5);
                }
            }
        }

        //Wow... 등차수열의 합공식.
        long Solution_simple(int a, int b)
        {
            return (long)(Math.Abs(b-a)+1)* (a+b)/2;
        }
    }
}