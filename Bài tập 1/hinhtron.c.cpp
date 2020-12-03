#include <stdio.h>

int main() {
	double CV, DT, R;
	// khai bao bien CT, DT va R kieu double//
	R = 1.5;
  double PI = 3.14;
  // khai bao hang ten PI kieu double//
  // tinh chu vi dien tich hinh tron//
  CV = 2 * R * PI;
  DT = R * R * PI;
  printf("CV hinh tron la: %0.1f\n",CV);
  printf("DT hinh tron la: %0.1f",DT);
  return 0;
}


