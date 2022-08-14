using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //기능개발.
        //++++++++++++++++++++++++++
        //2022.08.14.
        //흠...
        public void Solution_204()
        {
            var result = solution(new int[] {93, 30, 55}, new int[] {1, 30, 5});
            Console.WriteLine(result);
            
            
            int[] solution(int[] progresses, int[] speeds)
            {
                int day = 0;
                int max_day = 0;
                
                var result = new List<int>();
                for (int i = 0; i < progresses.Length; ++i)
                {
                    day = GetDay(progresses[i], speeds[i]);
                    if (max_day < day)
                    {
                        result.Add(1);    
                    }
                    else
                    {
                        result[^1]++;
                    }
                    
                    if (max_day < day)
                    {
                        max_day = day;
                    }
                }

                return result.ToArray();
            }

            int GetDay(int progress, int speed)
            {
                return (int) Math.Ceiling((100f - progress) / speed);
            }
                


        }
    }
}