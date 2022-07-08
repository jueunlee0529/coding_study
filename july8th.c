#include <stdio.h>

int main(void) {
  int a;
  
  scanf("%d",&a);
  // 입력 받는 코드
printf("%d\n", a/7==5);
  // a를 7로 나눈 몫은 5
  printf("%d\n", a/3%0);
  // a를 3으로 나눈 나머지는 0이다
  printf("%d\n", a%5!=0);
  // a는 5의 배수가 아니다
  printf("%d\n", a%3==0 && a%2==0);
  // a는 3의 배수이고 짝수이다
  printf("%d\n", a/4%0 || a/7%0);
  // a는 4 또는 7로 나누면 나머지가 0이다
}
