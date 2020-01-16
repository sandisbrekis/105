/* 43.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Masīva kārtošana */

#include <stdio.h>
#include <stdlib.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main()
{
 int i, j, k; // ciklu mainigie
 int Temp; // islaicigais mainigais
 char mas3[] = "Masivs"; // kartojamo skaitlju masivs
 int arrSize = (sizeof(mas3)/ sizeof(mas3[0]));

 printf("[%s]\nChar\tHEX\tDEC\n", mas3);
 for (i=0; i<arrSize; i++) // cikliska masiva kartoshana
{
 for (j=0; j<(arrSize-1); j++) // nakoshais cikls ir
{ // par vienu mazaaks
 if (mas3[j] > mas3[j+1])
{
 Temp = mas3[j];
 mas3[j] = mas3[j+1];
 mas3[j+1] = Temp;
}
}
}

 for(k=0; k<(arrSize); k++) {
 printf("\"%c\"\t0x%02X\t%u\n",mas3[k], mas3[k], mas3[k]);
}
printf("\n");
}

