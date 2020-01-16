/* 22.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2019. gada 23. novembrī
Versija: 1.0
Programma cikliskam robežas e aprēķinam */

#include <stdio.h>
#include <limits.h>
int main()

{
 int k; // Mainigais Cikla
 double lim; // Rebezas mainigais

 for (k=1; k<=50; k++)
{
 lim = pow((1+1./k),k); // Aprekins
 printf ("k=%d lim =%f \n", k, lim);
}
}
