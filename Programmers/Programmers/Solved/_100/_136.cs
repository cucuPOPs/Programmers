using System;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //내적.
        //++++++++++++++++++++++++++
        //2022.01.09.
        //ez.
        //zip 사용. return a.Zip(b, (t1, t2) => t1 * t2).Sum();
        public void Solution_136()
        {
            //
            int solution(int[] a, int[] b)
            {
                return a.Select((v, i) => v * b[i]).Sum();
            }
        }

        private void Solution_useZip()
        {
            int solution(int[] a, int[] b)
            {
                return a.Zip(b,(v1, v2) => v1*v2).Sum();
            }
        }
    }
}