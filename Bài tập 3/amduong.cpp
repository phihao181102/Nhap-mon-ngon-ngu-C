#include <stdio.h>

int main(void) {
  int a=-5 ;
  scanf("%d",&a);
  //kiem tra a la duong hay am
  if(a > 0 ){
 printf("%d  la so duong",a);
}
 else if (a == 0) { 
 printf("a = 0");
  }
  else{
    printf("%d la so am",a);
  }

  return 0;
}
