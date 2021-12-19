using System;

namespace Programmers
{
    public partial class Program
    {
        //약수의 합.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //ez.
        //short code 보다 가독성!!!
        public void Solution_116()
        {
            Solution(12);//28 ::1+2+3+4+6+12 = 28
            Solution(5);//6 ::1+5=6
            int Solution(int n) {
                int answer = 0;
                for (int i = 1; i * i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        answer += i;
                        //25 : 1 5 5 25=> 1 5 25
                        if (i * i != n)answer += n / i;
                    }
                }
                return answer;
            }
        }
    }
}