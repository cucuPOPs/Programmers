using System;
using System.Linq;
namespace Programmers
{
    public partial class Program
    {
        //문자열 내림차순으로 배치하기.
        //++++++++++++++++++++++++++
        //2021.12.22.
        //ez
        public void Solution_123()
        {
            string s = Solution("Zbcdefg");
            Console.WriteLine(s);
            string Solution(string s)
            {
                char[] ch = s.ToCharArray();
                Array.Sort(ch,(a,b)=>b.CompareTo(a));
                return new string(ch);
            }
        }
    }
}