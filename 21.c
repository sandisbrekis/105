/* 21.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2019. gada 23. novembrī
Versija: 1.0
Programma parāda iespējamo datu tipa pārplūdi */

#include <stdio.h>
#include <limits.h>
int main()

{
int a = 50000;
int b = 1000000;
int c = a * b;
long int c = (long int)a * (long int)b; //Sagaidamais rezultats

 printf("int datu tipa izmers ir: %ld baiti \n" , sizeof(int) );
 printf("Apreekjinam a un b reizinaajumu: \n" );
 printf("a = %d, b = %d \n", a, b);
 printf("c = a * b = %d * %d = %d \n" , a,b,c ); //Rezultats
}
