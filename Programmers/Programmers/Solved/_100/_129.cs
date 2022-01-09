using System;

namespace Programmers
{
    public partial class Program
    {
        //나머지가 1이 되는 수 찾기.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //ez...
        public void Solution_129()
        {
            solution(10);//3
            solution(12);//11
            //
            int solution(int n)
            {
                int answer = 0;
                for (int i = 1 ; i < n; i++)
                {
                    if (n % i == 1)
                    {
                        answer = i;
                        break;
                    }
                }
                return answer;
            }
        }
    }
}