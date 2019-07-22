/* 산술 연산 */
#include <stdio.h>
int main()
{
  int a, b;
  a = 10;
  b = 3;
  printf("a + b 는 : %d \n", a + b); // a + b 는 : 13, = 은 대입연산자
  printf("a - b 는 : %d \n", a - b); // a - b 는 : 7
  printf("a * b 는 : %d \n", a * b); // a * b 는 : 30
  printf("a / b 는 : %d \n", a / b); // a / b 는 : 3
  printf("a %% b 는 : %d \n", a % b); // a % b 는 : 1, %%를 사용하는 이유는 %b로 착각할 수 있긴 때문이다, a를 b로 나누러 나머지 값을 출력한다
  return 0;
}


//주의 할점
#include <stdio.h>
int main()
{
  int a, b;
  a = 10;
  b = 3;
  printf("a / b 는 : %f \n", a / b);  /* 해서는 안될 짓, %f 가 오직 실수형 데이터 만을 출력하기 위해 있는 것이라 하였습니다.
  그런데, a / b 가 10 나누기 3 이므로 3.3333... 이 되서 해서 실수형 데이터가 되는 것이 아닙니다.
  (정수형 변수) (연산) (정수형 변수) 는 언제나 (정수) 으로 유지됩니다. 따라서,
  실수형 데이터를 출력하는 %f 를 정수형 값 출력에 사용하면 0.0000 처럼 이상한 결과가 나오게 됩니다. */
  return 0;
}


//3.3333 값을 내기 위해선
#include <stdio.h>
int main()
{
  int a;
  double b; // 나

  a = 10;
  b = 3;
  printf("a / b 는 : %f \n", a / b); // a / b = 3.3333 산술 변환을 거치기 때문에 int 함수가 doule 함수로 산술 변환이 된다
  printf("b / a 는 : %f \n", b / a); // b / a = 0.3000 
  return 0;
}


/* 대입 연산자   */
#include <stdio.h>
int main()
{
  int a = 3; // int = a; a = 3; 을 줄여서 썼다
  a = a + 3;
  printf("a 의 값은 : %d \n", a); // a의 값은 : 6
  return 0;
}


/* 더하기 1 을 하는 방법  */
#include <stdio.h>
int main()
{
  int a = 1, b = 1, c = 1, d = 1;

  a = a + 1;
  printf("a : %d \n", a); // a : 2
  b += 1;
  printf("b : %d \n", b); // b : 2 b += 1 은 b = b + 1 이다
  /*
  b += x;  // b = b + x; 와 같다
  b -= x;  // b = b - x;와 같다
  b *= x;  // b = b * x;와 같다
  b /= x;  // b = b / x;와 같다
  */
  ++c;
  printf("c : %d \n", c); // c : 2 prefix
  d++;
  printf("d : %d \n", d); // d : 2 postfix

  return 0;
}

/* prefix, postfix */
#include <stdio.h>
int main()
{
  int a = 1;

  printf("++a : %d \n", ++a); // ++a : 2 

  a = 1;
  printf("a++ : %d \n", a++); // a++ : 1 
  printf("a : %d \n", a); // a : 2 

  return 0;
}

//비트 연산자에는 & (AND 연산), | (OR 연산), ^ (XOR 연산), << >> (쉬프트 연산), , ~ (반전)

// AND 연산 (11 두개가 있어야 1이 된다)
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0

// OR 연산 (하나만 1이어도 1이 된다)
1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0

// XOR 연산 (두 수가 달라야 1이 된다)
1 ^ 1 = 0
0 ^ 1 = 1
1 ^ 0 = 1
0 ^ 0 = 0

// 반전 연산
1100 = 0011

// << >> 연산
11100010 >> 3 = 11111100
00011001 >> 3 = 00000011

/* 비트 연산 */
#include <stdio.h>
int main()
{
  int a = 0xAF;  // 10101111
  int b = 0xB5;  // 10110101

  printf("%x \n", a & b);   // a & b = 10100101 
  printf("%x \n", a | b);   // a | b =10111111
  printf("%x \n", a ^ b);   // a ^ b = 00011010
  printf("%x \n", ~a);      // ~a = 1....1 01010000
  printf("%x \n", a << 2);  // a << 2 = 1010111100
  printf("%x \n", b >> 3);  // b >> 3 = 00010110

  return 0;
}