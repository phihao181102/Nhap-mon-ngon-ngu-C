#include <stdio.h>

int main() {
	// khai bao bien CT, DT va R kieu double//
	double CV, DT, R;
	R = 1.5;
	// khai bao hang ten PI kieu double//
  double PI = 3.14;
  // gan gia tri DT,CV, R
  CV = 2 * R * PI;
  DT = R * R * PI;
  printf("CV hinh tron la: %0.1f\n",CV);
  printf("DT hinh tron la: %0.1f",DT);
  return 0;
}


