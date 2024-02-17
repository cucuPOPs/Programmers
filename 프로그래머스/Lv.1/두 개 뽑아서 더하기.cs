//두 개 뽑아서 더하기
//2022.01.09.
//++++++++++++++++++++++
// 중복제거처리.
// 1.tempArray.Distinct().ToArray(); 마지막에 중복제거.
// 2. if( ~~.contains()) //요소추가할때 중복체크.
// 정렬처리
// 1. Array.Sort(~~);//마지막에 정렬.
// 2. OrderBy사용. //마지막에 정렬.
// 3. Sorted~컬렉션 사용. //요소추가시 정렬.
//뭐가 최적화인지는 모르겟다..

int[] solution(int[] numbers)
{
    SortedSet<int> set = new SortedSet<int>();
    for (int i = 0; i < numbers.Length - 1; i++)
    {
        for (int j = i + 1; j < numbers.Length; j++)
        {
            set.Add(numbers[i] + numbers[j]);
        }
    }

    return set.ToArray();
}