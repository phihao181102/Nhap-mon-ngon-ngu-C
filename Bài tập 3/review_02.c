#include <stdio.h>
int main() {
 //khai bao bien a b i
 int a, b,i;
char *str[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
 scanf("%d\n%d", &a, &b);
 //neu i=a va i<=b thi thuc hien vong lap
 for(int i =a; i <= b; i++) {
  //neu i>9 va la so chan thi dau ra la even
 if(i > 9) {
 if(i % 2 == 0)
 printf("even\n");
  //neu i>9 va la so le thi dau ra la odd
 else printf("odd\n");
 }
 else {
 printf("%s\n",str[i]);
 }
 }
 //chay code
 return 0;
}
