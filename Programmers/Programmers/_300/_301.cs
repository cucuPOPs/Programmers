using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //N-Queen
        //++++++++++++++++++++++++++
        //2021.12.12.
        //백트레킹 대표문제.
        //백트레킹이란게..이런거구나..
        //재귀적 해결법 말고는 불가능인가.??
        //1차원 배열로, (행,열) = (인덱스, 값)
        //왜 가능하냐? 한 행에, 하나만 존재하는 문제이기때문.
        int count = 0;
        public void Solution_301()
        {
            Console.Write(Solution(4));//2
            
            int Solution(int n)
            {
                int[] arr = new int[n+1];
                nQueen(0, arr);
                return count;
            }

            void nQueen(int row, int[] arr)
            {
                int n = arr.Length-1;
                //유망한가?
                if (promising(row, arr))
                {
                    if (row == n)
                    {
                        for (int i = 1; i < arr.Length; i++)
                        {
                            Console.Write($"[{i},{arr[i]}],");
                        }
                        Console.WriteLine();
                        count++;
                    }
                    else
                    {
                        for (int i = 1; i < arr.Length; i++)
                        {
                            arr[row+ 1] = i;
                            nQueen(row + 1, arr);
                        }
                    }
                }
            }
            //유망한가?
            bool promising(int row,int[] arr)
            {
                for (int i = 1; i < row; i++)
                {
                    //같은 열인가?
                    if (arr[row] == arr[i])
                    {
                        return false;
                    }
                    //같은 대각선인가?
                    //열의 차이가 행의 차이와 같다
                    if (Math.Abs(arr[row] - arr[i]) == (row - i))
                    {
                        return false;
                    }
                }
                return true;
            }
        }
    }
}