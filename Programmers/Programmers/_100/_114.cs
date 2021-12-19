using System;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //자릿수 더하기.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //ez.
        public void Solution_114()
        {
            //1+2+3=6
            Solution(123);//6

            int Solution(int n)
            {
                int result = 0;
                while (n > 0)
                {
                    result += n % 10;
                    n /= 10;
                }

                return result;
            }
        }
    }
}