/* 33.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Programma faktoriālu aprēķiniem */

#include <stdio.h>
#include <limits.h>

int main ()
{
/*
 int num, i;
 int reizinajums = 1; // faktoriāls no 0! = 1

 printf("Ievadam veselu skaitli: ");
 scanf("%d", &num);

 for (i=1; i<=num; i++){
		reizinajums = reizinajums * i;
}
 printf("Skaitļa %d faktoriāls ir: %d \n", num, reizinajums);
 printf("Maksimālā integer datu tipa vērtība: %d\n", INT_MAX);
*/
 int num, i; // num - skaitlis
 long double reizinajums = 1; // faktoriāls no 0! = 1

 printf("Ievadam veselu skaitli: ");
 scanf("%d", &num);

 for (i=1; i<=num; i++){
		reizinajums = reizinajums * i;
}
 printf("Skaitļa %d faktoriāls ir: %Lf \n", num, reizinajums);
}

