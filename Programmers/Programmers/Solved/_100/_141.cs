using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //3진법 뒤집기.
        //++++++++++++++++++++++++++
        //2022.01.16.
        //와우....초깔끔...
        //hashTag; #진수변환 #진법변환
        public void Solution_141()
        {
            int result = solution(45);
            Console.WriteLine(result);//7
            int solution(int n)
            {
                List<int> list = new List<int>();
                while (n != 0)
                {
                    list.Add(n % 3);
                    n /= 3;
                }

                list.Reverse();

                return (int)list.Select((x, idx) => x * Math.Pow(3, idx)).Sum();
            }
        }
    }
    
}

