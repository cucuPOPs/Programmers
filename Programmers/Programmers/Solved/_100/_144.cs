using System;
using System.Collections.Generic;
using System.Linq;

namespace Programmers
{
    public partial class Program
    {
        //신고 결과 받기.
        //++++++++++++++++++++++++++
        //2022.05.22.
        //linq...selectMany랑, groupby...알아보자.
        public void Solution_144()
        {
            //
            int[] solution(string[] id_list, string[] report, int k)
            {
                int count = id_list.Length;
                if (k >= count) return new int[count];
                    
                Dictionary<string, int> dicIndex = new Dictionary<string, int>();
                Dictionary<string, List<string>> dicReport = new Dictionary<string, List<string>>();
                for (int i = 0; i < count; i++)
                {
                    dicIndex.Add(id_list[i], i);
                    dicReport.Add(id_list[i], new List<string>());
                }
                int[] countList= new int[count];
                List<string> temp = report.Distinct().ToList();
                for (int i = 0; i < temp.Count; i++)
                {
                    string[] t = temp[i].Split(' ');
                    dicReport[t[0]].Add(t[1]);
                    countList[dicIndex[t[1]]]++;
                }

                int[] result = new int[count];
                for (int i = 0; i < count; i++)
                {
                    foreach (var s in dicReport[id_list[i]])
                    {
                        if (countList[dicIndex[s]] >= k)
                        {
                            result[i]++;
                        }
                    }
                }
                
                return result;
            }
            int[] solution_WOW(string[] id_list, string[] report, int k) {
                var tReport = report.Distinct().
                    Select(s => s.Split(' ')).
                    GroupBy(g => g[1]).
                    Where(w => w.Count() >= k).
                    SelectMany(sm => sm.Select(s => s[0])).
                    ToList();

                return id_list.ToDictionary(x => x, x => tReport.Count(c => x == c)).Values.ToArray();
            }
            
        }
    }
}