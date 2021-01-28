#include <stdio.h>

int main(void) {
int i,n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("nhap phan tu so %d ", i+1);
        scanf("%d", &a[i]);
    }
    printf(" mang a : \t");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    for (i =0; i < n; i++){
      int tong;
          tong = tong + a[i];
          printf("tong =%d",tong);
    }
    }  return 0;
}
