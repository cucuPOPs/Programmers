using System;

namespace Programmers
{
    public partial class Program
    {
        //부족한 금액 계산하기.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //return Math.Max(0, answer - money);
        //가독성 짱...wow.
        //등차수열의 합 : 평균 x 개수
        public void Solution_128()
        {
            long result = solution(3, 20, 4);
            Console.WriteLine(result);
            //
            long solution(int price, int money, int count)
            {
                long answer = count * (price + price * count) / 2;
                return answer - money < 0 ? 0 : answer - money;
                //wow.
                //return Math.Max(0, answer - money);
            }
        }
    }
}