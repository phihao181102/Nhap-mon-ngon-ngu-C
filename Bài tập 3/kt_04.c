#include <stdio.h>

int main(void) {
  int n;
  printf(" Nhap n = ");scanf("%d",&n);
  int s = 0;
  int so;
  while(n != 0){
    so = n %10;
    //cap nhat lai n
    n = n / 10;
    //tinh tong
    s = s+ so;
    }
    printf("%d",s);
  
  
  
  return 0;

}
