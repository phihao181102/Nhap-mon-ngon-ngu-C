#include <stdio.h>

int main(void) {
  int n;
  printf ("Nhap n = "),scanf ("%d",&n);
  if (n==1)
  {
    printf("one");
  }
  if (n==2)
  {
    printf("two");
  }
  if (n==3)
  {
    printf("three");
  }
  if (n==4)
  {
    printf("four");
  }
  if (n==5)
  {
    printf("five");
  }
  if (n==6)
  {
    printf("six");
  }
  if (n==7)
  {
    printf("even");
  }
  if (n==8)
  {
    printf("eight");
  }
  if(n==9)
  {
    printf("nine");
  }
  else if(n > 9)
  {
    printf("Greater than 9");
  }
  return 0;
  
}
