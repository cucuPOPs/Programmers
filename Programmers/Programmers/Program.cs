using System;

namespace Programmers
{
    partial class Program
    {
        static void Main(string[] args)
        {
            #region rules
            //숫자규칙.
            //1단계 1번문제 = 101
            //1단계 15번문제 = 115
            //3단계 3번문제 = 303
            //1단계 1번문제 다른사람풀이 = 101_0, 101_1, 101_2, ...
            
            //info.
            //문제번호는 임의부여함.
            //1단계는 총 44문제이다.
            //2단계는 총 40문제이다.
            //3단계는 총 28문제이다.
            //4단계는 총 10문제이다.
            //5단계는 총 6문제이다.
            
            
            //문제마다 다음과같은 주석을 작성.
            //문제이름.
            //++++++++++++++++++++++++++
            //작성날짜.
            //느낀점.
            #endregion
            
            Program p = new Program();
            p.Solution_102();
        }
    }
}