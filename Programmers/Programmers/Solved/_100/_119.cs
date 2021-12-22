using System;
using System.Text;

namespace Programmers
{
    public partial class Program
    {
        //수박수박수박수박수박수?.
        //++++++++++++++++++++++++++
        //2021.12.20.
        //ez. 한줄코딩 가능할꺼같은데 흠.
        public void Solution_119()
        {
            Solution(3);//수박수
            Solution(4);//수박수박
            string Solution(int n)
            {
                StringBuilder builder = new StringBuilder();
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0) builder.Append("수");
                    else builder.Append("박");
                }

                return builder.ToString();
            }
        }
    }
}