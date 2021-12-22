using System;

namespace Programmers
{
    public partial class Program
    {
        //N개의 최소공배수.
        //++++++++++++++++++++++++++
        //2021.12.11.
        //108문제 응용.
        //ez
        public void Solution_201()
        {
            //
            Console.WriteLine(Solution(new int[]{2,6,8,14}));//168
            Console.WriteLine(Solution(new int[]{1,2,3}));//6
            //
            int Solution(int[] arr)
            {
                int answer = arr[0];
                for (int i = 1; i < arr.Length; i++)
                {
                    answer = lcm(answer, arr[i]);
                }

                return answer;
            }

            int gcd(int a, int b)
            {
                return a % b == 0 ? b : gcd(b, a % b);
            }

            int lcm(int a, int b)
            {
                return a * b / gcd(a, b);
            }
        }
    }
}