//평균 구하기.
//2021.12.11.
double Solution(int[] arr)
{
    return (double)arr.ToList().Sum() / arr.Length;
}


//linq 함수가 싱기하네에에
double SolutionAverage(int[] arr)
{
    return arr.Average();
}