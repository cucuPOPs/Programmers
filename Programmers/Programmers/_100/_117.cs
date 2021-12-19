using System;

namespace Programmers
{
    public partial class Program
    {
        //시저 암호.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //더 줄이고싶은데, 그건 힘들겠지...
        public void Solution_117()
        {
            string test_1=Solution("AB", 1);//BC
            Console.WriteLine(test_1);
            string test_2=Solution("z", 1);//a
            Console.WriteLine(test_2);
            string test_3=Solution("a B z", 4);//e F d
            Console.WriteLine(test_3);
            //
            string Solution(string s, int n)
            {
                string result = "";
                char[] ch = s.ToCharArray();
                for (int i = 0; i < ch.Length; i++)
                {
                    if (char.IsLower(ch[i]))
                    {
                        ch[i] =(char)((ch[i] - 'a' + (char)n) % 26 + 'a');
                    }
                    else if (char.IsUpper(ch[i]))
                    {
                        ch[i] = (char) ((ch[i] - 'A' + (char)n) % 26 + 'A');
                    }

                    result += ch[i];
                }
                return result;
            }
        }
    }
}