// 문자를 저장하는 변수
#include <stdio.h>
int main() {
  char a; // 문자를 저장할 수 있는 변수 character의 약자 char integer의 약자 int
  a = 'a'; // a라는 문자를 대입할때 작은 따옴표를 사용해야한다

  printf("a 의 값과 들어 있는 문자는? 값 : %d , 문자 : %c \n", a, a); // a 의 값과 들어 있는 문자는? 값 : 97(a의 아스키 코드) , 문자 : a 
  return 0;
}


// 섭씨온도를 화씨로 바꾸기
#include <stdio.h>
int main( {
  double celsius;  // 섭씨 온도

  printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
  printf("섭씨 온도를 입력해 주세요 : ");
  scanf("%lf", &celsius);  // 섭씨 온도를 입력 받는다. printf, scanf 함수를 통틀어 입출력함수라고 부른다
  /* 이제, 새로운 것이 등장하였군요. printf 에 이어 등장한 scanf 군. printf 가 화면에 결과를 출력해 주는 함수였다면, scanf 는 화면(키보드) 로 부터 결과를 받아들이는 입력 함수 입니다.
  이렇게 흔히 printf 와 scanf 를 가리켜 입출력함수라 하죠. 이 때, scanf 함수는 우리가 어떠한 입력을 하기 전까지 계속 기다립니다. 또한, 입력을 할 때 엔터를 눌러야지만 입력으로 처리됩니다.
  scanf 와  printf 는 이름도 비수무리 할 뿐더러, 사용하는 방법도 비슷합니다. printf 에서 각 변수를 출력할 포맷(%d, %f, %c 등) 을 변수마다 다르게 하는 것처럼 scanf 도 각 변수의 타입마다 입력받는 포맷을 달리 해야 합니다.
  위 경우 처럼 double 형의 변수를 입력 받으려면 %lf (소문자 LF 이다, if 가 아니다) 로 해야 합니다.
  그런데, printf 보다 조금 까다로운 점은 printf 는 double 이나 float 모두 %f 로 출력하지만 이에 경우 float 은 %f 로 무조건 입력 받아야 한다는 점입니다.
  마찬가지로 double 형 변수도 무조건 %lf  로만 입력 받아야 합니다. 그 외에도, printf 는 정수형 변수는 모두 %d 로 출력 가능했던 반면에 scanf 는 각 자료형 마다 포맷이 다 정해져 있습니다.
  */

  printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);

  return 0;
}


// scanf 총 정리
#include <stdio.h>
int main() {
  char ch;  // 문자

  short sh;  // 정수
  int i;
  long lo;

  float fl;  // 실수
  double du;

  printf("char 형 변수 입력 : "); // 1byte char 함수에 한글을 입력할시 오류가 발생할 수 있다. 한글은 2byte 이상이기 때문에
  scanf("%c", &ch);

  printf("short 형 변수 입력 : ");
  scanf("%hd", &sh);
  printf("int 형 변수 입력 : ");
  scanf("%d", &i);
  printf("long 형 변수 입력 : ");
  scanf("%ld", &lo);

  printf("float 형 변수 입력 : ");
  scanf("%f", &fl);
  printf("double 형 변수 입력 : "); // printf 함수 일경우 float, double형에서는 %f로 동일하지만 scanf의 함수 일경우 float형는 %f, double형은 %lf를 사용한다
  scanf("%lf", &du);

  printf("char : %c , short : %d , int : %d ", ch, sh, i);
  printf("long : %d , float : %f, double : %f \n", lo, fl, du);
  return 0;
}