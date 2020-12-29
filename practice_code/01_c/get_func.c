# include <cs50.h>
# include <stdio.h>

// cs50.h라이브러리 함수
// get_* : input옵션 get_string과 같은 형식으로 사용

int main(void)
{
    // 숫자 입력
    int age = get_int("what's your Korean age?\n");
    int days = (age-1) * 365;
    printf("Your are almost %i days old.\n", days);
    printf("Your are almost %i hours old.\n", days*24);
    printf("Your are almost %i minutes old.\n", days*24*60);
    

    printf("\nanother...\n");

    // 부동소수 2자리까지 출력
    float price = get_float("What's the price? (dollor plz)\n");
    printf("Your total involved tax is %.2f\n", price*1.005);
  

    printf("\nanother...\n");

    // 홀수 짝수 확인
    int n = get_int("n: ");
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
