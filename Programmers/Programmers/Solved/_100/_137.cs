using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //K번째수.
        //++++++++++++++++++++++++++
        //2022.01.09.
        //ez.
        public void Solution_137()
        {
            //
            int[] solution(int[] array, int[,] commands)
            {
                List<int> answers = new List<int>();
                for (int i = 0; i < commands.GetLength(0); i++)
                {
                    int startIndex = commands[i, 0]-1;
                    int endIndex = commands[i, 1]-1;
                    int rank = commands[i, 2]-1;
                    int[] test = array
                        .Where((v, idx) => idx >= startIndex && idx <= endIndex)
                        .OrderBy(x => x)
                        .ToArray();
                    
                    answers.Add(test[rank]);
                }
                return answers.ToArray();
            }
        }
    }
}