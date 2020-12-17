#include <stdio.h>

int main(void){
  //khai bao gia tri so luong va don gia//
  int a, b;
  //tiep theo la nhap khoi luong//
  printf("nhap so luong vao day");
  scanf("%d",&a);
  //va nhap don gia//
  printf("vui long nhap don gia");
  scanf("%d",&b);
  //khai boa bien de tinh thanh tien//
  int khoiluong, giatri, thanhtien;
  //lam theo cong thuc so luong * don gia = thanh tien//
  thanhtien = a * b;
  if(a>=5){thanhtien=(a*b)*0.25;
  }
  //ta co ket qua dat duoc//
  printf("thanh tien = %d",thanhtien);
  return 0;


}
