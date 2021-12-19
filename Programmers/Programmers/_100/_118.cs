using System;

namespace Programmers
{
    public partial class Program
    {
        //문자열을 정수로 바꾸기.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //한줄코딩잼.ez
        public void Solution_118()
        {
            Solution("1234");//1234
            Solution("+1234");//1234
            Solution("-1234");//1234
            int Solution(string s)
            {
                return int.Parse(s);
            }
        }
    }
}