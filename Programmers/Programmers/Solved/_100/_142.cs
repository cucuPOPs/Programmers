using System;

namespace Programmers
{
    public partial class Program
    {
        //약수의 개수와 덧셈.
        //++++++++++++++++++++++++++
        //2022.01.16.
        //제곱수 판별..wow...
        //%1 미쳐따리.. 정수판별
        public void Solution_142()
        {
            //
            int solution(int left, int right)
            {
                int sum = 0;
                for (int i = left; i <= right; i++)
                {
                    if(isSquare(i))
                    {
                        sum += i;
                    }
                    else
                    {
                        sum -= i;
                    }
                }
                return sum;
            }

            bool isSquare(int num)
            {
                int temp = (int) Math.Sqrt((double) num + 0.5);
                return temp * temp == num;
            }

            bool isSquare2(int num)
            {
                if (Math.Sqrt(num) % 1 == 0) return true;
                else return false;
            }
        }
    }
}