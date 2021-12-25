using System;

namespace Programmers
{
    public partial class Program
    {
        //최소직사각형.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //ez.
        public void Solution_130()
        {
            int result = solution(new int[,] {{14, 4}, {19, 6}, {6, 16}, {18, 7}, {7, 11}});
            Console.WriteLine(result);//133
            //
            int solution(int[,] sizes)
            {
                int xMax = 0, yMax = 0;
                for (int i = 0; i < sizes.GetLength(0); i++)
                {
                    (int x, int y) temp = (sizes[i, 0], sizes[i, 1]);
                    (sizes[i, 0], sizes[i, 1])  = (Math.Min(temp.x, temp.y), Math.Max(temp.x, temp.y));
                    xMax = Math.Max(xMax, sizes[i, 0]);
                    yMax = Math.Max(yMax, sizes[i, 1]);
                }

                return xMax * yMax;
            }
        }
    }
}