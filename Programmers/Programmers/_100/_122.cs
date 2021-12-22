using System;
using System.Linq;
namespace Programmers
{
    public partial class Program
    {
        //문자열 다루기 기본.
        //++++++++++++++++++++++++++
        //2021.12.22.
        //? very ez.
        //tryParse도 있구나..
        public void Solution_122()
        {
            Console.WriteLine(Solution("a234"));//false
            Console.WriteLine(Solution("1234"));//false
            
            bool Solution(string s)
            {
                if (s.Length != 4 && s.Length != 6) return false;
                char[] ch = s.ToCharArray();
                foreach (char c in ch)
                {
                    if (!char.IsNumber(c)) return false;
                }
                return true;
            }
        }

        bool Solution_parse(string s)
        {
            bool answer = false;
            if (s.Length == 4 || s.Length == 6)            
                answer = int.TryParse(s, out int i);            
            return answer;
        }
    }
}