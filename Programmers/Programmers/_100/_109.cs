using System;

namespace Programmers
{
    public partial class Program
    {
        //짝수와 홀수
        //++++++++++++++++++++++++++
        //2021.12.11
        //ez
        public void Solution_109()
        {
            Console.WriteLine(Solution(3));//"Odd"
            Console.WriteLine(Solution(4));//"Even"
            string Solution(int num)
            {
                return num % 2 == 0 ? "Even" : "Odd";
            }
        }
    }
}