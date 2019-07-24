// if 문 이란?
#include <stdio.h>
int main()
{
  int i;
  printf("입력하고 싶은 숫자를 입력하세요! : ");
  scanf("%d", &i);

  if (i == 7) // == 를 관계연산자 라고 부른다
  {
    printf("당신은 행운의 숫자 7 을 입력했습니다");
  }

  return 0;
}


// 나눗셈 예제
#include <stdio.h>
int main()
{
  double i, j;
  printf("나누고 싶은 두 정수를 입력하세요 : "); // 만약 여기서 j변수에 0을 입력하게 될경우 오류와 함께 프로그램이 꺼지게 된다
  scanf("%lf %lf", &i, &j);

  printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

  return 0;
}


// 0이란 숫자를 입력하고 싶을 경우
#include <stdio.h>
int main()
{
  double i, j;
  printf("나누고 싶은 두 정수를 입력하세요 : ");
  scanf("%lf %lf", &i, &j);

  if (j == 0)
  {
    printf("0 으로 나눌 수 없습니다. \n");
    return 0;
  }
  printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

  return 0;
}


// 합격? 불합격?
#include <stdio.h>
int main()
{
  int score;

  printf("당신의 수학점수를 입력하세요! : ");
  scanf("%d", &score);

  if (score >= 90)
  {
    printf("당신은 합격입니다! \n");
  }

  if (score < 90)
  {
    printf("당신은 불합격 입니다! \n");
  }

  return 0;
}


// 크기 비교하기
#include <stdio.h>
int main() {
  int i, j;

  printf("크기를 비교할 두 수를 입력해 주세요 : ");
  scanf("%d %d", &i, &j);

  if (i > j)  // i 가 j 보다 크면
  {
    printf("%d 는 %d 보다 큽니다 \n", i, j);
  }
  if (i < j)  // i 가 j 보다 작으면
  {
    printf("%d 는 %d 보다 작습니다 \n", i, j);
  }
  if (i >= j)  // i 가 j 보다 크거나 같으면
  {
    printf("%d 는 %d 보다 크거나 같습니다 \n", i, j);
  }
  if (i <= j)  // i 가 j 보다 작거나 같으면
  {
    printf("%d 는 %d 보다 작거나 같습니다 \n", i, j);
  }
  if (i == j)  // i 와 j 가 같으면
  {
    printf("%d 는 %d 와(과) 같습니다 \n", i, j);
  }
  if (i != j)  // i 와 j 가 다르면
  {
    printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
  }

  return 0;
}


// if - else문 시작하기
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
  } else {
    printf("그냥 보통 숫자인 %d 를 입력했군요\n", num);
  }
  return 0;
}


// if - else 죽음의 숫자?
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
  } else {
    if (num == 4) {
      printf("죽음의 숫자 4 인가요 ;;; \n");
    } else {
      printf("그냥 평범한 숫자 %d \n", num);
    }
  }
  return 0;
}


// 생각없이 if - else 함수를 사용할 경우 쓰레기가 된다
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
  } else {
    if (num == 4) {
      printf("죽음의 숫자 4 인가요 ;;; \n");
    } else {
      if (num == 1) {
        printf("첫 번째 숫자!! \n");
      } else {
        if (num == 2) {
          printf("이 숫자는 바로 두번째 숫자 \n");
        } else {
          ......(생략)......
        }
      }
    }
  }
  return 0;
}


// 새로쓰는 죽음의 숫자 예제
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
  } else if (num == 4) {
    printf("죽음의 숫자 4 인가요 ;;; \n");
  } else if (num == 1) {
    printf("첫 번째 숫자!! %d \n", num);
  } else {
    printf("그냥 평범한 숫자 %d \n", num);
  }
  return 0;
}


// if 와 if- else if 의 차이
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("a 행운의 숫자 7 이군요!\n");
  } else if (num == 7) {
    printf("b 행운의 숫자 7 이군요! \n");
  }

  // 비교
  if (num == 7) {
    printf("c 행운의 숫자 7 이군요!\n");
  }
  if (num == 7) {
    printf("d 행운의 숫자 7 이군요! \n");
  }

  return 0;
}

// 크기 비교
#include <stdio.h>
int main() {
  int a;
  printf("아무 숫자나 입력하세요 : ");
  scanf("%d", &a);

  if (a >= 10) {
    if (a < 20) {
      printf(" %d 는 10 이상, 20 미만인 수 입니다. \n", a);
    }
  }
  return 0;
}


// 논리 연산자
#include <stdio.h>
int main() {
  int a;
  printf("아무 숫자나 입력하세요 : ");
  scanf("%d", &a);

  if (a >= 10 && a < 20) /* &&란 and의 의미를 가진다 */{
    printf(" %d 는 10 이상, 20 미만인 수 입니다. \n", a);
  }

  return 0;
}


// 논리 합
#include <stdio.h>
int main() {
  int height, weight;
  printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
  scanf("%d %d", &height, &weight);

  if (height >= 190 || weight >= 100) /* ||란 or의 의미를 가진다 */{
    printf("당신은 '거구' 입니다. \n");
  }

  return 0;
}


// 논리 부정
#include <stdio.h>
int main() {
  int height, weight;
  printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
  scanf("%d %d", &height, &weight);

  if (height >= 190 || weight >= 100) {
    printf("당신은 '거구' 입니다. \n");
  }
  if (!(height >= 190 || weight >= 100)) /* !는 NOT의 의미를 가진다 */{
    printf("당신은 거구가 아닙니다. \n");
  }

  return 0;
}