using System;

namespace Programmers
{
    public partial class Program
    {
        //가운데 글자 가져오기.
        //++++++++++++++++++++++++++
        //2021-12-25.
        //ez.
        public void Solution_127()
        {
            string t1 =solution("abcde");
            string t2 = solution("qwer");
            Console.WriteLine(t1);//c
            Console.WriteLine(t2);//we
            
            //
            string solution(string s)
            {
                return s.Length % 2 == 0 ? s.Substring((s.Length-1)/2, 2) : s.Substring(s.Length/2, 1);
            }
        }
    }
}