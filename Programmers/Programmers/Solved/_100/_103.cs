using System;

namespace Programmers
{
    public partial class Program
    {
        //행렬의 덧셈
        //++++++++++++++++++++++++++
        //2021.12.11
        //ez
        public void Solution_103()
        {
            int[,] sample_t1 = new int[2, 2] {{1, 2}, {2, 3}};
            int[,] sample_t2 = new int[2, 2] {{3, 4}, {5, 6}};
            foreach (var t in solution(sample_t1, sample_t2))
            {
                Console.Write($"{t}, ");
            }

            int[,] solution(int[,] arr1, int[,] arr2)
            {
                int[,] answer = new int[arr1.GetLength(0), arr1.GetLength(1)];
                for (int i = 0; i < answer.GetLength(0); i++)
                {
                    for (int j = 0; j < answer.GetLength(1); j++)
                    {
                        answer[i, j] = arr1[i, j] + arr2[i, j];
                    }
                }

                return answer;
            }
        }
    }
}