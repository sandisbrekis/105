/* 40.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Masiiva kaartoshana */

#include <stdio.h>
int main()
{
 int i, j, k; // ciklu mainigie
 int Temp; // islaicigais mainigais
 int mas3[] = {2, 5, 3, 7, 0}; // kaartojamo skaitlju masiivs
 printf ("Masiva izmers = %d\n", sizeof(mas3)/ sizeof(int));

 for (i=0; i<5; i++) // cikliska masiva kartoshana
{
 for (j=0; j<(5-1); j++) // nakoshais cikls
{
 if (mas3[j] > mas3[j+1])
{
 Temp = mas3[j];
 mas3[j] = mas3[j+1];
 mas3[j+1] = Temp;
}
}
}
 // sakartota masiva izvade uz ekrana
 for(k=0; k<5; k++)
 printf("%d,",mas3[k]);
 printf("\n");
}

