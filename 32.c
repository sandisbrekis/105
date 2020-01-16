/* 32.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Programma faktoriālu aprēķiniem */

#include <stdio.h>

int main()
{
 long int num , i; // num -- skaitlis
 long int reizinajums = 1; // faktorials 0! = 1

 printf("Ievadam veselu skaitli: ");
 scanf("%ld", &num);

 for ( i=1 ; i<=num ; i++ )
{
 reizinajums *= i;
} // Izvade kluda, labot!

 printf("Skaitlja %ld faktorials ir: %ld\n", num, reizinajums);
}

