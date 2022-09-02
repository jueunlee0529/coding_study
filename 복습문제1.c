#include <stdio.h>
int main(void) 
{
int num;
scanf("%d", &num);
int cnt = 0;
  
if( num / 10 == 3 || num / 10 == 6 || num/ 10 == 9)
{
  cnt ++;
  }
if ( num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
{
  cnt ++;
}
  printf("%d", cnt);
}
