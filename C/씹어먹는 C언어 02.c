변수 선언하기
#include <stdio.h>

int main()
{
   int a; // a라는 변수를 사용하겠다고 컴파일러 에게 알리는 것 
   a = 10; // a에 10을 집어 넣는 다는 뜻이다
   printf("a의 값은 : %d 이다\n", a); // %d는 a의 값을 10진수로 출력하라 라는 뜻이다
   return 0;
}


#include <stdio.h>
int main() 
{
  int a;
  a = 127;
  printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a); // %o는 a의 값을 8진수로 출력하라는 뜻이다
  printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a); // %d는 a의 값을 10진수로 출력하라는 뜻이다
  printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a); // %n은 a의 값을 16진수로 출력하라는 뜻이다
  return 0;
}


#include <stdio.h>
int main()
{
  float a = 3.141592f; //float형 변수에 뒤에 f를 붙이지 않을 경우 double 형으로 인식할 가능성이 있어서 붙이는 것이다
  double b = 3.141592;
  printf("a : %f \n", a); // %
  printf("b : %f \n", b);
  return 0;
}


#include <stdio.h>
int main()
{
  float a = 3.141592f;
  double b = 3.141592;
  int c = 123;
  printf("a : %.2f \n", a); //.2f는 소수점 2번째 자리 까지 출력한다
  printf("c : %5d \n", c); // 5자리 숫자로 출력한다
  printf("b : %6.3f \n", b); // 6자리로 맞추고 소수점 3자리 까지 표시한다
  return 0;
}

//변수 선언시 주의 할점
#include <stdio.h>
int main() {
  int a, A; // a 와 A 는 각기 다른 변수 입니다.
  int 1hi; // (오류) 숫자가 앞에 위치할 수 없습니다.
  int hi123, h123i, h1234324; // 숫자가 뒤에 위치하면 괜찮습니다.
  int 한글이좋아; // (오류)변수는 오직 알파벳, 숫자, 그리고 _ (underscore)로만으로 이루어져야 합니다.
  int space bar; // (오류)변수의 이름에는 띄어쓰기하면 안됩니다.  그 대신 _ 로 대체하는 것이 읽기 좋습니다.
  int space_bar; // 이것은 괜찮습니다.
  int enum, long, double, int; /* (오류)
     지금 나열한 이름들은 모두 '예약어' 로 C 언어에서 이미 쓰이고 있는
     것들입니다. 따라서 이러한 것들은 쓰면 안됩니다. 이를 구분하는 방법은
     예약어들을 모두 외우거나 '파란색' 으로 표시된 것들은 모두 예약어라 볼 수
     있습니다 */
  return 0;
}