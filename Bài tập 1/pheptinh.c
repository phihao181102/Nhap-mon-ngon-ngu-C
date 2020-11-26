#include <stdio.h>

int main(void) {
  // khai bao bien a, b kieu int 
  int a; int b;
  a= 3; b= 5;
  // khai bao bien tong, hieu, thuong, tich kieu int
  int tong; int hieu; int tich; int thuong;
  // khoi tao gia tri bien tong, thuong, hieu, tich
  tong = a+b; hieu= a-b; thuong=a/b; tich= a*b;
  // hien thi bien tong ra man hinh
  printf("tong= %d\n",a+b);
  // hien thi bien hieu ra man hinh
  printf("hieu= %d\n",a-b);
  // hien thi bien tich ra man hinh 
  printf("tich= %d\n",a*b);
  //hien thi bien thuong ra man hinh
  printf("thuong= %d\n",a/b);

  return 0;
}
