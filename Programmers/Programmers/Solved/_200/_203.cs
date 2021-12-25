using System;
namespace Programmers
{
    public partial class Program
    {
        //행렬의 곱셈.
        //++++++++++++++++++++++++++
        //2021.12.22.
        //ez.
        public void Solution_203()
        {
            //int[,] answer = Solution(new int[,] {{1, 4}, {3, 2}, {4, 1}},new int[,]{{3,3},{3,3}});
            int[,] answer = Solution(new int[,] {{2,3,2},{4,2,4},{3,1,4}},new int[,]{{5,4,3},{2,4,1},{3,1,1}});
            for (int i = 0; i < answer.GetLength(0); i++)
            {
                for (int j = 0; j < answer.GetLength(1); j++)
                {
                    Console.Write($"{answer[i,j]}, ");
                }
                Console.WriteLine();
            }
            
            //
            int[,] Solution(int[,] arr1, int[,] arr2) {
                int[,] answer = new int[arr1.GetLength(0),arr2.GetLength(1)];
                for (int i = 0; i < answer.GetLength(0); i++)
                {
                    for (int j = 0; j < answer.GetLength(1); j++)
                    {
                        for (int k = 0; k < arr1.GetLength(1); k++)
                        {
                            answer[i, j] +=arr1[i, k] * arr2[k, j];
                        }
                    }
                }
                return answer;
            }
        }
    }
}