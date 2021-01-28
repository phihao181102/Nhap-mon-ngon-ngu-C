//****************************************CODE**********
//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong(int x);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen âm");
  else 
    printf("n = 0");
  return 0;
}
int kiem_tra_am_duong(int x){
  if (x > 0){
    return 1;
  }
  else if (x < 0){
    return -1;
  }
  else{
    return 0;
  }
}

// khoi dinh nghia ham

//*************************END CODE*****************************
