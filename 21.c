#include <stdio.h>
#include <limits.h>
int main()

{
int a = 50000;
int b = 1000000;
int c = a * b;

 printf("int datu tipa izmers ir: %ld baiti \n" , sizeof(int) );
 printf("Apreekjinam a un b reizinaajumu: \n" );
 printf("a = %d, b = %d \n", a, b);
 printf("c = a * b = %d * %d = %d \n" , a,b,c );
}
