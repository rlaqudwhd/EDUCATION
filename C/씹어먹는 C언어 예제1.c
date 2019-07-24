#include <stdio.h>

int main()
{
    double celsius;
    printf("섭씨 온도를 화씨 온도로 바꾸어 주는 프로그램입니다");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);

    printf("섭씨 온도 %f의 화씨 온도는 %f 입니다.\n", celsius, 9 / 5 * celsius + 32);
    return 0;
}

#include <stdio.h>

int main()
{
    double celsius;
    printf("섭씨 온도를 화씨 온도로 바꾸어 주는 프로그램입니다");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);

    printf("섭씨 온도 %f의 화씨 온도는 %f 입니다.\n", celsius, 9 * celsius / 5 + 32);
    return 0;
}

// 다르게 나온다 산수의 순서가 있는 듯 하다