#include <stdio.h>

int main(void) {
  int a;
  
  scanf("%d",&a);
printf("%d\n", a/7==5);
  printf("%d\n", a/3%0);
  printf("%d\n", a%5!=0);
  printf("%d\n", a%3==0 && a%2==0);
  printf("%d\n", a/4%0 || a/7%0);
}
