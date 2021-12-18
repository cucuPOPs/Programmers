using System;
using System.Collections.Generic;

namespace Programmers
{
    public partial class Program
    {
        //하노이의 탑.
        //++++++++++++++++++++++++++
        //2021.12.18.
        //원반이 1개일때 : =1번.
        //원반이 2개일때 : 원반 1개를 2번에 놓자. = 3번
        //원반이 3개일때 : 원반2개를 2번에 놓자. = 7번.
        //원반이 4개일때 : 원반3개를 2번에 놓자. = 15번.
        //원반이 n개일때,//횟수 : 2^n - 1
        //key point : 위치A,B,C에 대해, 원반이 n개일때, n-1개를 B에 놓고. 제일 큰원반을 C에 놓고, n-1개를 C에 놓는다. 

        private int[,] answer;
        private int index;
        public void Solution_302()
        {
            int[,] result = Solution(2);
            //print
            for (int i = 0; i < result.GetLength(0); i++)
            {
                Console.Write($"[");
                for (int j = 0; j < result.GetLength(1); j++)
                {
                    Console.Write($"{result[i,j]} ,");
                }
                Console.Write($"], ");
            }
            //++++++++++++++++++++++++++
            int[,] Solution(int n) {
                answer = new int[(int)Math.Pow(2,n)-1,2];
                Hanoi(2, "1", "2", "3");
                //Hanoi(2, "A", "B", "C");
                return answer;
            }

            void Hanoi(int n, string start, string assistant, string end)
            {
                if (n == 1)
                {
                    Move(n, start, end);
                }
                else
                {
                    Hanoi(n - 1, start, end, assistant);
                    // N-1개의 원반을 A->B 로 보조 기둥 c를 이용하여 옮긴다.
                    Move(n, start, end);
                    // 제일 큰 원반을 A->C 로 옮긴다
                    Hanoi(n - 1, assistant, start, end);
                    // N-1개의 원반을 B->C 로 보조 기둥 A를 이용하여 옮긴다.    
                }
            }
            

            void Move(int n, string start, string end)
            {
                Console.WriteLine($"${n}원반을, ${start}에서 ${end}으로.");
                answer[index / 2, index % 2] = int.Parse(start);
                index++;
                answer[index / 2, index % 2] = int.Parse(end);
                index++;
                
            }
        }
    }
}