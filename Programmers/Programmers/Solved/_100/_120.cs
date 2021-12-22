using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //소수 찾기.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //ez.제곱근.
        public void Solution_120()
        {
            int test_1 = Solution(10);//2,3,5,7 = 4개
            Console.WriteLine(test_1);//4
            
            int test_2 = Solution(5);//2,3,5 = 3개
            Console.WriteLine(test_2);//3
            
            int Solution(int n)
            {
                int cnt = 0;
                for (int i = 2; i <= n; i++)
                {
                    if (IsPrime(i))
                    {
                        cnt++;
                    }    
                }
                return cnt;
            }
        }
        public bool IsPrime(int n)
        {
            for (int i = 2; i*i <= n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}