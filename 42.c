/* 42.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Masīva kārtošana */

#include <stdio.h>
int main()
{
 int i, j, k; // ciklu mainigie
 int Temp; // islaicigais mainigais
 char mas3[]= "Sandis Brekis"; // kartojamo skaitlu masivs

 printf("Masiva izmers = %ld\n", sizeof(mas3)/sizeof(mas3[0]));

 for (i=0; i<(sizeof(mas3)/sizeof(mas3[0])); i++){ // cikliska masiva kartosana
 for (j=0; j<(sizeof(mas3)/sizeof(mas3[0])-1); j++){ // nakošais cikls ir par vienu mazaks
 if (mas3[j] > mas3[j+1]){
 Temp = mas3[j];
 mas3[j] = mas3[j+1];
 mas3[j+1] = Temp;
}
}
}
 // sakartota masiva izvade uz ekranu
 for(k=0; k<(sizeof(mas3)/sizeof(mas3[0])); k++){
 printf("0x%02X = \"%c\"\n",mas3[k], mas3[k]);
}
}

