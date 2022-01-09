using System;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //음양 더하기.
        //++++++++++++++++++++++++++
        //2022.01.09.
        //한줄wow..
        //return absolutes.Select((v, i) => signs[i] == true ? v : -v).Sum();
        public void Solution_134()
        {
            int solution(int[] absolutes, bool[] signs)
            {
                long result = 0;
                for (int i = 0; i < absolutes.Length; i++)
                {
                    result += (signs[i] == true ? 1 : -1) * absolutes[i];
                }
                return (int)result;
            }
        }
    }
}