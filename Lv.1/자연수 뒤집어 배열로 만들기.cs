//자연수 뒤집어 배열로 만들기
//2021.12.20.
//Short code를 위해, 검색함 ㅎ.
int[] Solution(long n)
{
    char[] a = n.ToString().ToCharArray();
    Array.Reverse(a);
    return Array.ConvertAll(a, c => (int)Char.GetNumericValue(c));
}