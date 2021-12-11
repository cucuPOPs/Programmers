using System;

namespace Programmers
{
    public partial class Program
    {
        //콜라츠 추측.
        //++++++++++++++++++++++++++
        //2021.12.11.
        //정답만 맞추지말고 코드에도 신경을 써보자...
        public void Solution_107()
        {
            Console.WriteLine(Solution(6));//8
            Console.WriteLine(Solution(16));//4
            Console.WriteLine(Solution(626331));//-1
            //
            int Solution(int num)
            {
                long newNum = num;
                int count = 0;
                while (count < 500)
                {
                    if (newNum == 1) break;
                    if (newNum % 2 == 0)
                    {
                        newNum /= 2;
                    }
                    else
                    {
                        newNum=newNum * 3 + 1;
                    }

                    count++;
                }

                if (count == 500)
                    return -1;
                return count;
            }
            
            int solution_useFor(int num) {
                long lNum = num;//long num 이 네이밍이 더 좋네.
                for (int i = 0; i < 500; i++)
                {
                    if (lNum == 1) return i;
                    lNum = lNum % 2 == 0 ? lNum / 2 : lNum * 3 + 1;                        
                }
                return -1;        
            }
        }
    }
}