using System;
namespace Programmers
{
    public partial class Program
    {
        //직사각형 별찍기
        //++++++++++++++++++++++++++
        //2021.12.11
        //너무 easy했다
        public void Solution_101()
        {
            String[] s;
            Console.Clear();
            s = Console.ReadLine().Split(' ');

            int a = int.Parse(s[0]);
            int b = int.Parse(s[1]);

            for(int i=0;i<b;i++)
            {
                for(int j=0;j<a;j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            
        }
    }
}