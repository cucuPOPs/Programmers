//부족한 금액 계산하기
//2021-12-25.
//return Math.Max(0, answer - money);
//가독성 짱...wow.
//등차수열의 합 : 평균 x 개수
long solution(int price, int money, int count)
{
    long answer = count * (price * ((long)count + 1)) / 2;
    return Math.Max(0, answer - money);
}