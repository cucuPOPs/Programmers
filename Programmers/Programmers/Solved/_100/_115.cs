using System;
using System.Linq;
namespace Programmers
{
    public partial class Program
    {
        //이상한 문자 만들기.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //ez.심플코드보고 현타잼.
        public void Solution_115()
        {
            string result  =Solution("try hello world");//"TrY HeLlO WoRlD"
            Console.WriteLine(result);
            
            string Solution(string s)
            {
                string answer = "";
                int cnt = 0;
                char[] ch = s.ToCharArray();
                foreach (char c in ch)
                {
                    if (char.IsWhiteSpace(c))
                    {
                        cnt = 0;
                        answer += " ";
                        continue;
                    }
                    
                    cnt++;
                    answer += cnt%2 == 0 ? char.ToLower(c) : char.ToUpper(c); 
                }                
                
                return answer;
            }
        }
        public string Solution_SO_SIMPLE(string s) {
            string answer = "";
            int num = 0;

            for(int i = 0; i < s.Length; i++)
            {
                answer += num % 2 == 0 ? s[i].ToString().ToUpper() : s[i].ToString().ToLower();

                num = s[i] == ' '? 0 : num + 1;

            }


            return answer;
        }
    }
}