#include <stdio.h>
 
int main() 
{
    int a, b, c;
 
    printf("Nhap a=\n");
    scanf("%d", &a);
    printf("Nhap b=\n");
    scanf("%d", &b);
    printf("Nhap c=\n");
    scanf("%d", &c);
 
    int max = a;
    if(max < b) 
    {
        max = b;
    }
 
    if(max < c) {
        max = c;
    }
 
    printf("So lon nhat la %d\n", max);
 
    return 0;
}
