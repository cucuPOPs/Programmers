//직사각형 별찍기
//2021.12.11
public static void Main()
{
    String[] s;

    Console.Clear();
    s = Console.ReadLine().Split(' ');

    int a = Int32.Parse(s[0]);
    int b = Int32.Parse(s[1]);

    Console.WriteLine("{0}", a + b);
}