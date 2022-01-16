using System;
using System.Collections.Generic;

namespace Programmers
{
    public partial class Program
    {
        //소수 만들기.
        //++++++++++++++++++++++++++
        //2022.01.16.
        //소수판별. 조합.
        public void Solution_143()
        {
            int result =solution(new int[] {1, 2, 3, 4});
            Console.WriteLine(result);//1
            //
            int solution(int[] nums)
            {
                int count = 0;
                for (int i = 0; i < nums.Length - 2; i++)
                {
                    for (int j = i+1; j < nums.Length - 1; j++)
                    {
                        for (int k =j+1; k < nums.Length;k++)
                        {
                            int sum = nums[i] + nums[j] + nums[k];
                            if (isPrime(sum)) count++;
                        }
                    }
                }
                return count;
            }

            bool isPrime(int num)
            {
                for (int i = 2; i < num; i++)
                {
                    if (num % i == 0) return false;
                }

                return num > 1;
            }
        }
    }
}