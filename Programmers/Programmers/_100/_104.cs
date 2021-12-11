using System;

namespace Programmers
{
    public partial class Program
    {
        //핸드폰 번호 가리기
        //++++++++++++++++++++++++++
        //2021.12.11
        //ez
        public void Solution_104()
        {
            string sample = "01033334444";
            string sample_t2 = "027774444";
            Console.WriteLine($"{solution(sample)}");
            Console.WriteLine($"{solution(sample_t2)}");

            string solution(string phone_number) {
                string answer = "";
                string t = phone_number.Substring(phone_number.Length - 4);
                for (int i = 0; i < phone_number.Length; i++)
                {
                    answer += "*";
                }

                answer += t;
                return answer;
            }
            
            string solution_usePaddingLeft(string phone_number) {
                string answer = phone_number.Substring(phone_number.Length - 4);
                answer = answer.PadLeft(phone_number.Length, '*');
                return answer;
            }
        }

    }
}