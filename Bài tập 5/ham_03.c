//Khoi khai bao
#include<stdio.h>
 //khoi ham main
int main(){
  int n;
  void Nhap_pt_mang (int a[]);
void Hien_thi_pt_mang (int a[]);
void Hien_thi_tong_chan (int a[]);
void Dem_chan_le_0(int a[]);

  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
