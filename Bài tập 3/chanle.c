#include <stdio.h>

int main(void) 
{
  int n;
  printf("nhap n:\n");
  // kiem tra n la chan hay le
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("%d la so chan",n);
  }
  else 
  {
    printf("%d la so le",n);
  }
  getchar();
  return 1;
}
  
