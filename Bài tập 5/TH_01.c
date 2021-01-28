#include <stdio.h> 
#include <math.h>

int main() {
    // khai báo bi?n
	float a, c, b, delta, x1, x2, x;
	printf("Nhap vao cac he so phuong trinh bac hai: ");
	scanf("%f%f%f", &a, &b, &c);
	// xét duy?t các kh? nang
	if(a == 0) { // PT b?c 1
		if(b == 0 && c != 0) {
			printf("Phuong trinh vo nghiem\n");
		} else if(b == 0 && c == 0) {
			printf("Phuong trinh co vo so nghiem\n");
		} else {
			x = -c / b;
			printf("Nghiem phuong trinh = %0.2f", x);
		}
	} else { // PT b?c 2
		delta = b * b - a * c * 4; // tính delta
		if(delta < 0) { // TH1
			printf("PT vo nghiem");
		} else if(delta == 0) { // TH2
			x1 = -b/(2 * a);
			// k?t qu?
			printf("PT co nghiem kep x = %0.2f", x1);
		} else { // TH3
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			// k?t qu?
			printf("Nghiem PT la: \nx1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}
	
	return 0;
} 
