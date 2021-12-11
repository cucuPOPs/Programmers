using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //제일 작은 수 제거하기
        //++++++++++++++++++++++++++
        //2021.12.11
        //ez
        public void Solution_110()
        {
            //
            foreach (var t in Solution(new int[]{4,3,2,1}))
            {
                Console.WriteLine($"{t},");//4,3,2    
            }

            foreach (var t in Solution(new int[]{10}))
            {
                Console.WriteLine($"{t},");//-1  
            }
            
            int[] Solution(int[] arr)
            {
                if (arr.Length == 1) return new int[] {-1};
                 
                int min = arr.ToList().Min();
                return arr.ToList().Where(t => t != min).ToArray();
            }
        }
    }
}