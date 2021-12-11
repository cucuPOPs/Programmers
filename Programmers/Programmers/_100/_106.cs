using System;
using System.Linq;
namespace Programmers
{
    public partial class Program
    {
        //평균 구하기.
        //++++++++++++++++++++++++++
        //2021.12.11.
        //linq 함수가 싱기하네에에
        public void Solution_106()
        {
            Console.WriteLine(Solution(new int[] {1, 2, 3, 4}));
            
            double Solution(int[] arr) {
                return (double)arr.ToList().Sum() / arr.Length;
            }
            
            double Solution_Average(int[] arr) {
                return arr.Average();
            }
        }
    }
}