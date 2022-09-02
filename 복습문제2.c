#include <stdio.h>
int main(void) 
{
int num;
scanf("%d", &num);
  
while (1)
{
 printf("%d ", num);
  num--;
  if (num == 0)
  {
    printf("Bang!");
    break;
  }
}

}
