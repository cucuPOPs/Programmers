using System;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //JadenCase 문자열 만들기.
        //++++++++++++++++++++++++++
        //2021.12.11.
        //나름 깔끔하게 짠거같음 ㅎ 뿌듯잼ㅋ
        public void Solution_202()
        {
            Console.WriteLine(Solution("aaaaa    aaa"));//"Aaaaa    Aaa"
            Console.WriteLine(Solution("3people unFollowed me"));//"3people Unfollowed Me"
            Console.WriteLine(Solution("for the last week"));//"For The Last Week"
            //
            string Solution(string s)
            {
                string[] t = s.Split(' ');
                for (int i = 0; i < t.Length; i++)
                {
                    if(string.IsNullOrEmpty(t[i])) continue;
                    t[i] = t[i].ToUpper().First() + t[i].ToLower().Substring(1);
                }

                return string.Join(' ',t);

            }
        }
    }
}