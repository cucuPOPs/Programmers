using System;

namespace Programmers
{
    public partial class Program
    {
        //멀리 뛰기.
        //++++++++++++++++++++++++++
        //2021.12.19.
        //1칸 = [1]
        //2칸 = [1,1] [2]
        //3칸 = [1,1,1] [2,1] [1,2]
        //4칸 = [1,1,1,1] [2,1,1] [1,2,1] [1,1,2] [2,2]
        //N칸 = [N-1칸 foreach] + [1] , [N-2칸 foreach]+[2]

        public void Solution_304()
        {
            long Solution(int n)
            {
                int one_step = 1;
                int two_step = 2;
                if (n == 1)
                    return 1;
                for (int i = 2; i < n; i++)
                {
                    (one_step, two_step) = (two_step, (one_step + two_step) % 1234567);
                }

                return two_step % 1234567;
            }
        }
    }
}